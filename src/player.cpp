#include <string>
#include <vector>
#include <iostream>
#include "player.h"

/// Construtor de uma máquina
Player::Player(){
	name = "Corleone";
	controller = 1; //maquina
	player_dice.set_faces(6);
	total_points = 0;
	round_points = 0;
};
/// Construtor de um jogador qualquer
Player::Player(int contr, int n_faces){
	name = "Gambler";
	controller = contr;
	player_dice.set_faces(n_faces);
	total_points = 0;
	round_points = 0;
};
/// ajusta o nome do jogador
void Player::set_name(){
  std::cout << "Qual o seu nome?" << std::endl;
	std::cin >> name;
};
/// retorna o nome do jogador
std::string Player::get_name(){
	return name;
};
///mostra o log do jogador. Cria um iterator percorre o vector e imprime cada string
void Player::show_player_log(){
	std::vector<std::string>::iterator it;
	for(it = player_log.begin(); it != player_log.end(); it++){
		std::cout << *it << std::endl;
	}
};
/// Acrescenta um log no meu player log
void Player::set_player_log(std::string log){
	player_log.push_back(log);
};
/// Modifica a pontuação total
void Player::set_total_points(int total){
	total_points = total_points + total;
};
/// Retorna a pontuação total
int Player::get_total_points(){
	return total_points;
};
/// Modifica a pontuação do turno
void Player::set_round_points(int round){
	round_points = round;
};
/// soma um valor ao round points
void Player::sum_round_points(int round){
  round_points = round_points + round;
}
/// Retorna a pontuação do round
int Player::get_round_points(){
	return round_points;
};
