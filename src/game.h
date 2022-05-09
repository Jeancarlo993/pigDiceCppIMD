#include<vector>
#include "player.h"

/***********************************************************************!
 * Essa classe representa o jogo em si. No seu construtuor estarão todas 
 * as etapas para o inicio do jogo. Depois outro método cuidará das rodadas
 * e por fim um método cuidará do fim do jogo.
 * O Player maquina será representado por 0 e o jogador humano por 1
 ************************************************************************/


class Game{
 	private:
		char option;				    //! variável que recebe opção
    int turno;              //! variável que armazena de quem é o turno. 
    int count_rolls;
	public:
    int estado;             //! se 1 o jogo segue, se 0 o jogo chegao ao fim
    std::vector<Player>players_on; //! vector com todos os jogadores
   	
   	void show_rules();        //! Método que imprime as regras do jogo
		void game_over(int);		    //! Fim no jogo. Recebe o vencedor
		void sorteio();			      //! Sorteia qual jogador deve iniciar
		void tela_inicial();	    //! Exibe a tela inicial
		Game();			              //! Método construtor
    void option_in();         //! Método que processa a entrada 
    void turn_hold(int);      //! Muda turno.Recebe o turno para quem deve passar
    void turn_roll();         //! Rolar dado 
    void quit();             //! Sair do jogo
    void board_game();        //! Exibe um quadro com a pontuação total
    void play();              //! Método que executa o jogo em si
};
