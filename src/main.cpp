#include <iostream>
#include "player.h"

int main() {
  Player eu;
  std::cout << "Hello World!" << eu.player_dice.roll();
  std::cout << eu.get_name();
}