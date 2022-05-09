#include <iostream>
#include "game.h"
int main() {
  Game pig_dice;
  while(pig_dice.estado==1){
    pig_dice.play();
  }
  return 0;
}