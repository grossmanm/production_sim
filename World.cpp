// Main loop for the game
#include <Windows.h>
#include <cstdio>
#include <time.h>
#include <cstdlib>
#include <math.h>
#include "Person.h"

int main() {
  bool game = true;
  Person people[] = { Person("Neo")};
  people[0].getName();
  int size = *(&people + 1) - people;
  float temp = 22;
  while(game) {
    printf("Hello World");
    for (int i = 0; i < size; i++) {
      people[i].updateHunger();
      people[i].updateThirst();
      people[i].updateHealth();
      people[i].updateFatigue();
      people[i].updateTempExt(temp);
      people[i].updateTempInt();
      printf("hunger: %f\n", people[i].hunger);
      printf("thirst: %f\n", people[i].thirst);
      printf("health: %f\n", people[i].health);
      printf("fatigue: %f\n", people[i].fatigue);
      printf("external temperature: %f\n", people[i].temp_ext);
      printf("interal temperature: %f\n", people[i].temp_int);
    }
    _sleep(1500);
  }
  return 0;
}
