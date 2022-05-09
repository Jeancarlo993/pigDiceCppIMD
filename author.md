# Introduction
<!-- TODO -->
Breve descrição do projeto.
O projeto consiste no jogo Pig Dice, sendo implementado no paradigma de Orientação a Objeto. 
Usei 3 classes. Uma classe para o Dado, outra classe para o Jogador, outra classe para o jogo.
A classe jogo, para esse projeto, cria dois jogadores, um controlado pelo computador outro para
o jogador humano. Cada jogador possui seu próprio dado.

# Author(s)
<!-- TODO -->
Jean Carlo Nascimento Araújo
jeanascimento993@gmail.com

# Problems found or limitations
<!-- TODO -->
* Não entendi muito para que serve o ifndef e o define, então acabei por não usar no projeto.
* Gostaria de implementar uma animação no dado, mas não consegui fazer de maneira que eu não 
tivesse que dar um clear na tela toda. 
* Não consegui entender em que momento eu poderia usar os destrutores
* Acredito que não fiz um bom tratamento dos erros


# Grading

<!-- TODO -->
Preencha os itens que você implementou, indicando qual a nota esperada para cada item.

Item     | Valor máximo   | Valor esperado
-------- | :-----: | :-----:
Shows the game rules | 5 | 5
Randomly chooses the player who starts the match | 5 | 5
Program runs correctly, alternating turns between players | 10 | 10
Keeps the correct values of the turn total    | 10 | 10
Display the plays/outcomes of the human as requested in this document | 10 | 10
Display the plays/outcomes of the machine as requested in this document | 10 | 10
Show the match's partial score | 10 | 10
Show the action log at the end of a match | 10 | 10
Identify the winner correctly | 10 | 10
Created at least two classes | 10 | 10
Program handles errors properly | 10 | 0

# Compiling and Runnig

<!-- TODO -->
Indique aqui como compilar e executar seu programa.
* Para compilar usei o g++ na pasta src, passando os arquivos .cpp (main.cpp game.cpp player.cpp dice.cpp)
