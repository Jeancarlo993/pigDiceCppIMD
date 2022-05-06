#include <string>
#include <vector>
#include "dices.h"

/***********************************************************************!
 * Essa classe representa um jogador que pode ser máquina ou humano.
 * O jogador também o seu log de jogadas, informando o que houve em cada
 * rodada. Além disso, o jogador também tem seus pontos conquistados no
 * round e no jogo como um todo.
 ************************************************************************/

class Player{
	private:
		std::string name;						//!< nome do jogador
		int controller; 						//!< humano 1 maquina 0
		std::vector <std::string> player_log;	//!< vector com os logs
		int total_points;						//!< pontos do jogo
		int round_points;						//!< pontos do turno
	public:
		Dice player_dice;						//!< o dado do jogador
		Player();								//!< construtor
		Player(std::string,int,int);			//!< construtor
		std::string get_name();					//!< retorna nome
		void set_name(std::string);				//!< ajusta o nome
		void show_player_log();					//!< mostra o log
		void set_player_log(std::string);	 	//!< acrescenta uma entra no log
		void set_total_points(int);				//!< modifica pontuação total
		int get_total_points();					//!< retorna pontuação total
		void set_round_points(int);				//!< modifica pontuação do turno
		int get_round_points();					//!< retorna pontuação do turno
};
