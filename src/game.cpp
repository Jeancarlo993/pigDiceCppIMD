#include "game.h"
#include <iostream>
#include <fstream>
#include <vector>

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
/// Processa a entrada
void Game::player_options_in(){
  std::cin >> option;
};

/// método construtor
Game::Game(){
  show_rules();
  Player machine;        
  Player human(1,6);
  human.set_name();
  players_on.push_back(machine);
  players_on.push_back(human);
  sorteio();
};
///  método sortear
void Game::sorteio(){
  Dice sort_dice(2);  
  turno = sort_dice.roll();
  if(turno==1){
    std::cout << ">>>  "<<players_on[0].get_name() << " inicia o jogo"<<std::endl;}
  else{
    std::cout << ">>>  "<<players_on[1].get_name() << " inicia o jogo"<<std::endl;
  }
};