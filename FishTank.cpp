#include "FishTank.h"
#include <iostream>
using namespace std;

  FishTank::FishTank(){
    temperature = 75.0;
    volume = 30; //in gallons
    phLevel = 7.5;
  }

  FishTank::FishTank(float temp, float vol, float ph){
    temperature = temp;
    volume = vol; //gallons
    phLevel = ph;
  }

  void FishTank::setTemperature(float temp){
    temperature = temp;
  }
  void FishTank::setphLevel(float ph){
    phLevel = ph;
  }
  void FishTank::setVolume(float vol){
    volume = vol;
  }
  float FishTank::getTemperature(){
    return temperature;
  }
  float FishTank::getphLevel(){
    return phLevel;
  }
  float FishTank::getVolume(){
    return volume;
  }
