#include <iostream>
#include "AquaticAnimal.h"

using namespace std;

  //default constructor
  AquaticAnimal::AquaticAnimal(){
    name = "petName";
    age = 0;
    diseaseOrNot = false;
    hunger = 0;
    health = 100;
  }

  //overloaded constructor
  AquaticAnimal::AquaticAnimal(string _name, int _age, bool disease, int _hunger, int _health){
    name = _name;
    age = _age;
    diseaseOrNot = disease;
    hunger = _hunger;
    health = _health; 
  }

  //function to check the environment of fish tank
  bool AquaticAnimal::check_environment(float temp, float ph, float vol){
    if ((temp >= 70 && temp <= 80) && (ph >= 7 && ph <=8)){ 
      if (vol<20){
      return false;
      cout << "The fish tank is too small to accomodate your pet!" << endl;   
      }
      return true;
    }
    else{
      return false;
      cout << "Pet could not be added. The temperature and/or pH levels were not sustainanle for your pet in the fish tank!" << endl;
    }
  }


//setters and getters
  double AquaticAnimal::getSellPrice(){
    return sellPrice;
  }
  double AquaticAnimal::getBuyPrice(){
    return buyPrice;
  }
  bool AquaticAnimal::getDiseaseOrNot(){
    return diseaseOrNot;
  }
  int AquaticAnimal::getHunger(){
    return hunger;
  }
  int AquaticAnimal::getHealth(){
    return health;
  }
  string AquaticAnimal::getName(){
    return name;
  }

  void AquaticAnimal::setAge(int _age){
    age = _age;
  }
  void AquaticAnimal::setSellPrice(double sellP){
    sellPrice = sellP;
  }
  void AquaticAnimal::setBuyPrice(double buyP){
    buyPrice = buyP;
  }
  void AquaticAnimal::setDiseaseOrNot(bool disease){
    diseaseOrNot = disease;
  }
  void AquaticAnimal::setHunger(int _hunger){
    hunger = _hunger;
  }
  void AquaticAnimal::setHealth(int _health){
    health = _health;
  }
  void AquaticAnimal::setName(string _name){
    name = _name;
  }