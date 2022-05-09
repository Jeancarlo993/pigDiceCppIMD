# Pig Dice Cpp IMD
Projeto desenvolvido para a disciplina de Linguagem de Programação 1 na UFRN. 
## Classes  
* Dado   
Essa classe representa um dado que pode ter várias faces.
Basseado na quantidade de faces, retorna um número aleatório
de 1 até o numero de faces  
	* Atributos 
		* faces -> o numero sorteado por um dado será de 1 até faces  
	* Métodos  
		* Construtor -> por padrão inicia um dado com 6 faces  
		* Construtor(int) -> recebe como parâmetro um int e iniciar um dado com int faces  
		* roll -> faz o sorteio do dado e retorna o numero sorteado  
		* set_faces -> ajusta a quantidade de faces do dado  

* Jogador  
 Essa classe representa um jogador que pode ser máquina ou humano.
 O jogador também o seu log de jogadas, informando o que houve em cada
 rodada. Além disso, o jogador também tem seus pontos conquistados no
 round e no jogo como um todo.  
	* Atributos 
		* name -> nome de um jogador  
		* controller -> se quem contra é humano 1, se quem controla é máquina 0  
		* player_log -> logo do jogo que exibe o resumo de cada turno  
		* total_points -> pontos totais do jogador  
		* round_points -> pontos acumulados no turno  
		* player_dice -> dado do jogador  
		* round_log -> é a string que resume o turno e que vai ser amazenada no player_log  
	* Métodos  
		* Construtor -> por padrão constroi um player chamado corleone que é máquina e tem um dado de 6 faces  
		* Construtor(int, int) -> constroi um player com nome genérico.Primeiro int diz se é maquina ou humano. Segundo int é número de faces do dado  
		* get_name e set_name -> retorna o nome e ajusta o nome do player  
		* set_total_points(int) -> ajusta o total_points para o int recebido  
		* get_total_points(); -> retorna o total_pooints  
		* set_round_points(int) -> ajusta o round_points para o int recebido  
		* sum_round_points(int) -> soma o valor int recebido ao round_points  
		* get_round_points(0 -> retorna os pontos do turno  
		* set_player_log -> adiciona uma string ao player_log  
		* show_player_log -> exibe o player log  
* Jogo  
Essa classe representa o jogo em si. No seu construtuor estarão todas 
as etapas para o inicio do jogo. Depois outro método cuidará das rodadas
e por fim um método cuidará do fim do jogo.
O Player maquina será representado por 0 e o jogador humano por 1 
	* Atributos 
		* option -> opções de entrada para os jogadores humanos
		* turno -> guarda a informação sobre de quem é o turno 
		* count_rolls -> conta quantas rolagens foram feitas no turno
		* estado -> 1 se o jogo continua, 0 se o jogo acabou. Encerra o while principal do jogo
		* players_on -> um vector com todos os jogadores que estão jogando
	* Métodos 
		* show_rules() -> mostra as regras do jogo (estão em um arquivo .txt)
		* game_over(int) -> recebe o jogador que ganhou, mostra a tela final e encerra o jogo
		* sorteio() -> sorteia quem inicia o jogo
		* tela_inicial() -> não foi implementada. mas a ideia é que seria exibida uma tela de abertura do jogo
		* Construtor -> inicia o jogo mostrando as regras, iniciando os players, sorteando quem começa
		* option_in() -> entrada das opções
		* turn_hold(int) -> recebe um int que indica para quem deve mudar o turno
		* turn_roll() -> faz a rolagem do dado para o turno
		* quit() -> encerra o jogo
		* board_game() -> exibe resultado parcial do jogo
		* play() -> controla todo o jogo. Pede a opção do jogador, armazena os dados do jogo, exibe as telas 
	
## O jogo
* Mostra o manual
	* iniciar
		* escolher o nome
		* sortear quem começa
			* se human começa
				* oferece as opções
					* se r, então rola faz uma jogada
						* caso valor jogado mais o valor o total até então passe os 100 então game_over() 
							* mostra o log final do jogo e indica o vencedor  
					* se h, passa o turno
					* se q, sai do jogo
					* se m, mostra o manual
					* se l, mostra o log 		 
			* se machine começa
				* faz 5 jogadas
				* caso 1 em alguma delas, passa o turno
				* caso valor jogado mais o valor o total até então passe os 100 então game_over() 
					* mostra o log final do jogo e indica o vencedor 
				* depois das 5 jogadas passa o turno	
