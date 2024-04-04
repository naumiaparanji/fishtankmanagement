#include "Fish.h"
#include <iostream>
using namespace std;

  Fish::Fish() : AquaticAnimal(){
    buyPrice = 30;
    sellPrice = 120;
    distance = 0;
  }

  Fish::Fish(string _name, int _age, bool disease, int _hunger, int _health, int _distance, double buy, double sell) : AquaticAnimal(_name, _age, disease, _hunger, _health) {
    buyPrice = buy;
    sellPrice = sell;
    distance = _distance;
  }

void Fish::next_day(){
  //increase hunger
  hunger = hunger + 15;
  cout << "It's a new day!" << endl;
   //reset distance
  distance = 0; 
  //randomly make one sick?
  if (rand() % 2 == 0){
    diseaseOrNot = true;
    cout << name << " is sick! ";
    health = health - 40;
  } 
  else{
    diseaseOrNot = false;
    cout << name << " was not detected with any sickness today" << endl;
  }
}

void Fish::swim(){
  distance = distance + 5; //rounds around the tank
  hunger = hunger + 5;
  cout << name << " swam! Its distance covered today is now at " << distance << endl;
}

void Fish::setDistance(int _distance){
  distance = _distance;
}
 int Fish::getDistance(){
   return distance;
 }

void Fish::displayInfo(){
  cout << "Its hunger is at " << hunger << endl;
  cout << "Its health is at " << health << endl;
}
