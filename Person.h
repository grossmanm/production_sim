// base actor object of the game
#include <stdio.h>


#ifndef PERSON_H
#define PERSON_H


#include <string>

class Person {
  char* p_name;

  public:

    float hunger = 1; // hunger ranges from 0 to 1; 0 being starving, 1 being full
    float health = 1; // health ranges from 0 to 1; 0 being dead, 1 being fully healthy
    float thirst = 1; // thirst ranges from 0 to 1; 0 being dehydrated, 1 being quenched
    float fatigue = 1; // fatigue ranges from 0 to 1; 0 being exhausted, 1 being energized
    float temp_ext = 34; // external temperature of the Person
    float temp_int = 37; // internal temperature of the Person


    Person(char* name) {
      p_name = name;
    }

    void getName() {
      printf(p_name);
    }

    void updateHunger(float u_hunger = -0.001) { // updates hunger value, will be called each tick and whenever character eats
      hunger += u_hunger;
      if (hunger < 0) { // hunger should not drop bellow 0
        hunger = 0;
      }
    }

    void updateThirst(float u_thirst = -0.001) { // updates thirst value, will be called each tick and whenever character drinks
      thirst += u_thirst;
      if (thirst < 0) { // thirst should not drop bellow 0
        thrist = 0;
      }
    }

    void updateFatigue(float u_fatigue = -0.0001) { // updates fatigue value, will be called each tick and changes depending on activity level
      fatigue += u_fatigue;
      if (fatigue < 0) { // fatiuge should not drop bellow 0
        fatigue = 0;
      }
    }

    void updateTempExt(float u_temp_ext) { // udpates external temperature of the person, will be called each tick
      temp_ext += (u_temp_ext - temp_ext) / 10000;
    }

    void updateTempInt() {  // updates internal temperature of the person, will be called each tick
      temp_int += (temp_ext - temp_int) / 10000;
    }


    void updateHealth(float u_health = 0) { // updates health values, will be called each tick and whenever character takes damage or heals
      if (hunger == 0) {
        u_health -= 0.0001;
      }
      if (thrirst == 0) {
        u_health -= 0.0005;
      }
      if (fatiuge == 0) {
        u_health -= 0.00001;
      }
      health += u_health;
    }




};
#endif
