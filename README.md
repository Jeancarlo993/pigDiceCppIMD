# Pig Dice Cpp IMD
Projeto desenvolvido para a disciplina de Linguagem de Programação 1 na UFRN. 
## Classes  
* Dado   
Essa classe representa um dado que pode ter várias faces.
Basseado na quantidade de faces, retorna um número aleatório
de 1 até o numero de faces  
	* Atributos 
		* faces -> o numero sorteado por um dado será de 1 até faces  
	<h4> Métodos </h4>  
		* Construtor -> por padrão inicia um dado com 6 faces  
		* Construtor(int) -> recebe como parâmetro um int e iniciar um dado com int faces  
		* roll -> faz o sorteio do dado e retorna o numero sorteado  
		* set_faces -> ajusta a quantidade de faces do dado  

<h3> Jogador </h3>
 Essa classe representa um jogador que pode ser máquina ou humano.
 O jogador também o seu log de jogadas, informando o que houve em cada
 rodada. Além disso, o jogador também tem seus pontos conquistados no
 round e no jogo como um todo.  
	<h4> Atributos </h4>  
		* name -> nome de um jogador  
		* controller -> se quem contra é humano 1, se quem controla é máquina 0  
		* player_log -> logo do jogo que exibe o resumo de cada turno  
		* total_points -> pontos totais do jogador  
		* round_points -> pontos acumulados no turno  
		* player_dice -> dado do jogador  
		* round_log -> é a string que resume o turno e que vai ser amazenada no player_log  
	<h4> Métodos </h4>  
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
<h3> Jogo </h3>  
	<h4> Atributos </h4>
	<h4> Métodos </h4>
	
	
## O jogo
* tela inicial
	* iniciar
		* escolher o nome
		* escolher um dado
	* sair
* tela principal
	* instruções
	* sortear quem começa
	* se computador
		* faz jogada:
			* se for 0: passa
			* se diferente de 0: volta para faz jogada
			* caso pontos estejam em mais de 10: passa jogada
	* se humano
		* faz jogada:
			* se zero : passa
			* se hold : armazena pontos e passa
			* se play : volta a fazer jogada
	* ao fim de cada rodada mostra o score board
* tela do fim
	* exibe o log de jogadas
