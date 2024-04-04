#include "Turtle.h"
#include <iostream>
using namespace std;

Turtle::Turtle() : AquaticAnimal(){
  buyPrice = 40;
  sellPrice = 150;
  steps = 0;
  }

Turtle::Turtle(string _name, int _age, bool disease, int _hunger, int _health, int _steps) : AquaticAnimal(_name, _age, disease, _hunger, _health) {
  steps = _steps;
  }

void Turtle::next_day(){
  //increase hunger
  hunger = hunger + 20;
  cout << "It's a new day!" << endl; 
  
  //randomly make one sick
  if (rand() % 2 == 0){
    diseaseOrNot = true;
    cout << name << " is sick! ";
    health = health - 30;
  } 
  else {
    diseaseOrNot = false;
    cout << name << " has not been detected with any diseases today" << endl;
  }
  // reset steps
  steps = 0;
}

void Turtle::crawl(){
  steps = steps + 20;
  hunger = hunger + 10;
  cout << name << " crawled! Its number of steps today is now at " << steps << " and its hunger is now at " << hunger << endl;
}

void Turtle::setSteps(int _steps){
  steps = _steps;
}

int Turtle::getSteps(){
   return steps;
 }

void Turtle::displayInfo(){
  cout << "Its hunger is at " << hunger << endl;
  cout << "Its health is at " << health << endl;
  
}

