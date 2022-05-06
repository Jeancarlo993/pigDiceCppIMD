#include <ctime>
#include <time.h>
#include <dice.h>
/// Por padrão, o dado tem 6 faces
Dice::Dice(){
	faces = 6;
};

/// mas também pode-se iniciar o dado com outra quantidade de faces
Dice::Dice(int f){
	faces = f;
};

/// Usamos como seed a multiplicação do cloco() pelo time()
/// A intenção é que ocorram o menor número de repetições
int Dice::roll(){ 
	unsigned seed = clock()*time(0);
	srand(seed);
	return rand()%faces+1;
};
