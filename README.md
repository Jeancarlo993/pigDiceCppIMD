# Pig Dice Cpp IMD
Projeto desenvolvido para a disciplina de Linguagem de Programação 1 na UFRN. 
## Classes
* Dado
	* sorteia um número ok
	* pode ter varias faces ok
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
