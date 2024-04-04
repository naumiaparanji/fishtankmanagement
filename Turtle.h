#include "AquaticAnimal.h"
#ifndef TURTLE_H
#define TURTLE_H
using namespace std;

class Turtle : public AquaticAnimal {
public:
  Turtle();
  Turtle(string, int, bool, int, int, int);
  void next_day();
  void crawl();
  void setSteps(int);
  int getSteps();
  void displayInfo();

private:
  int steps;

};

#endif