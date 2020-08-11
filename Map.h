// creates the map of the world
#include <cstdlib>
#ifndef MAP_H
#define MAP_H

class Map {
  //int size;
  public:
    int world[50][50];
    Map() { //constructor method for the world
      for (int i = 0; i<50; i++) {
        for (int j = 0; j<50; j++) {
          world[i][j] = rand()%10;
        }
      }
    }
    int getVal(int x, int y) {
      return world[x][y];
    }

};
#endif
