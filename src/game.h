#include<vector>
#include "player.h"

/***********************************************************************!
 * Essa classe representa o jogo em si. No seu construtuor estarão todas 
 * as etapas para o inicio do jogo. Depois outro método cuidará das rodadas
 * e por fim um método cuidará do fim do jogo.
 ************************************************************************/


class Game{
 	private:
		char option;				           //! variável que recebe opção
    int turno;                     //! variável que armazena de quem é o turno
	public:
    std::vector<Player>players_on; //! vector com todos os jogadores
    void option_in();         //caputra uma opção
   	void player_options_in(); //! Método que processa a entrada 
   	void show_rules();        //! Método que imprime as regras do jogo
		void game_over();		      //! Método que põe fim no jogo	
		void sorteio();			      //! Sorteia qual jogador deve iniciar
		void tela_inicial();	    //! Exibe a tela inicial
		Game();			              //! Método construtor
};
