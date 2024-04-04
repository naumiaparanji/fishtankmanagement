#include "AquaticAnimal.h"
#ifndef FISH_H
#define FISH_H
using namespace std;

class Fish : public AquaticAnimal {
public:
  Fish();
  Fish(string, int, bool, int, int, int, double, double);
  void next_day();
  void swim();
  void setDistance(int);
  int getDistance();
  void displayInfo();

private:
  int distance;

};

#endif