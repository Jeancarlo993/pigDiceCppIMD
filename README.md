# Pig Dice Cpp IMD
Projeto desenvolvido para a disciplina de Linguagem de Programação 1 na UFRN. 
## Classes
<h3> Dado </h3>
Essa classe representa um dado que pode ter várias faces.
Basseado na quantidade de faces, retorna um número aleatório
de 1 até o numero de faces
	#### Atributos
		* faces -> o numero sorteado por um dado será de 1 até faces
	#### Métodos
		* Construtor -> por padrão inicia um dado com 6 faces
		* Construtor(int) -> recebe como parâmetro um int e iniciar um dado com int faces
		* roll -> faz o sorteio do dado e retorna o numero sorteado
		* set_faces -> ajusta a quantidade de faces do dado
* Jogo
	* exibe as telas
	* recebe as opções
	* avalia o jogo
	* tem uma lista de jogadores
* Jogador
	* tem um nome ok
	* pode ser bot ou humano ok
	* possui um log de jogadas ok
	* possui um dado ok

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
