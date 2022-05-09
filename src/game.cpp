#include "game.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <unistd.h>
/// método que exibe as regras do jogo
void Game::show_rules(){
  std::ifstream rules("gamerules.txt");
  std::string rule_l;
  if (rules.is_open()){
    while(!rules.eof()){
      getline (rules,rule_l);
      std::cout << rule_l << std::endl;
    }
    rules.close();
  }
};
/// método construtor
Game::Game(){
  estado = 1;
  count_rolls = 0;
  show_rules();
  Player machine;        
  Player human(1,6);
  human.set_name();
  players_on.push_back(machine);
  players_on.push_back(human);
  players_on[0].set_player_log(players_on[0].get_name());
  players_on[1].set_player_log(players_on[1].get_name());
  sorteio();
};
///  método sortear. se 0, machine começa. se 1, human começa
void Game::sorteio(){
  Dice sort_dice(2); 
  turno = sort_dice.roll();
  
  if(turno==1){
    std::cout << ">>>  "<<players_on[1].get_name() << " inicia o jogo"<<std::endl;}
  else{
    turno = 0;
    std::cout << ">>>  "<<players_on[0].get_name() << " inicia o jogo"<<std::endl;
  }
};
/// entrada das opções
void Game::option_in(){
  std::cout << "-------------------------------------------------------------" << std::endl;
  std::cout << "|                          Opções                           |" << std::endl;
  std::cout << "|     h - hold; r - roll; q - quit; m - manual; l - log     |" << std::endl; 
  std::cout << "-------------------------------------------------------------" << std::endl;
  std::cout << ">>> ";
  std::cin.clear();
  std::cin >> option;
};

void Game::turn_hold(int n_turno){
  // amarzane no log de jogadas 
  players_on[turno].round_log ="Jogou " + std::to_string(count_rolls) + " vezes. Marcou " + std::to_string(players_on[turno].get_round_points());
  players_on[turno].set_player_log(players_on[turno].round_log);
  count_rolls = 0;
  // passa os pontos do round para o total
  players_on[turno].set_total_points(players_on[turno].get_round_points());
  //zero os pontos do round
  players_on[turno].set_round_points(0);
  //troco o turno
  turno = n_turno;
  std::cout <<"Passou a vez" <<std::endl;
  board_game();
}

///método que faz o lance do dado
void Game::turn_roll(){
  count_rolls++;
  int valor = players_on[turno].player_dice.roll();
  std::cout << "Valor do dado: " << valor << std::endl;
  //se o valor tirado for 0, eu zero os pontos do turno e passo a vez
  if(valor==1){
    std::cout <<"Perdeu a vez :(" <<std::endl;
    players_on[turno].set_round_points(0);
    turn_hold(!turno);
    }
  else{
    players_on[turno].sum_round_points(valor);
    if(players_on[turno].get_round_points()+players_on[turno].get_total_points()>=100){
      players_on[turno].set_total_points(players_on[turno].get_round_points());
      game_over(turno);
    }
  }
};

/// método que sai do jogo 
void Game::quit(){
  std::cout << ">>> Tem certeza que deseja sair?";
  char option_local;
  std::cin >>option_local;
  if(option_local=='s'){
    std::cout << "Até logo s2"<<std::endl; 
    game_over(0);
    }
};

/// Placar do jogo
void Game::board_game(){
  std::cout << std::endl;
  std::cout << "=============================================================" << std::endl;
  std::cout << "|                        >>>BOARD  GAME<<<                  |" << std::endl;
  std::cout << "|-----------------------------------------------------------|" << std::endl;
  std::cout << players_on[0].get_name()<< "  " << players_on[0].get_total_points()<<std::endl;
  std::cout << players_on[1].get_name()<< "  " << players_on[1].get_total_points()<<std::endl;
  std::cout << "=============================================================" << std::endl << std::endl;
};

/// fim de jogo
void Game::game_over(int win){
  board_game();
  players_on[0].show_player_log();
  std::cout << "============================================================="<<std::endl;
  players_on[1].show_player_log();
  std::cout << "============================================================="<<std::endl;
  
  std::cout << std:: endl << players_on[win].get_name() << " venceu!!!";
  estado=0;
};

/// método do jogo em si
void Game::play(){
  std::cout << "Vez de " << players_on[turno].get_name() << std::endl;
  
  if(turno == 1){ //se a vez for de human
    if(players_on[1].get_total_points()>=100){
      game_over(1);
    }
    else{
      option_in();
      if(option == 'h'){turn_hold(0);}
      else if(option == 'r'){turn_roll();}
      else if(option == 'q'){quit();}
      else if(option == 'm'){show_rules();}
      else if(option == 'l'){players_on[turno].show_player_log();}
      else{std::cout << "Opção invalida"<<std::endl;}
    }
  }
  if(turno == 0){ //se a vez for da máquina
    std::cout << "Vez de " << players_on[turno].get_name() << std::endl;
    std::cout << std::endl << "-------------------------------------------------------------" << std::endl;
      for(int i = 0; i < 5;i++){
        sleep(1);
        if(turno==1){break;}
        else{turn_roll();}
      }
      if(turno==0){turn_hold(1);}
  }
};