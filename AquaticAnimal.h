#ifndef AQUATICANIMAL_H
#define AQUATICANIMAL_H
#include <iostream>
using namespace std;
#include <string>

class AquaticAnimal {

protected:
  int age;
  double buyPrice = 0;
  double sellPrice = 0;
  bool diseaseOrNot;
  int hunger;
  int health;
  string name;

public:
  AquaticAnimal();
  AquaticAnimal(string, int, bool, int, int);
  bool check_environment(float, float, float);
  virtual void next_day() = 0;
  virtual void displayInfo() = 0;

  //setters and getters
  int getAge();
  double getSellPrice();
  double getBuyPrice();
  bool getDiseaseOrNot();
  int getHunger();
  int getHealth();
  string getName();

  void setAge(int);
  void setSellPrice(double);
  void setBuyPrice(double);
  void setDiseaseOrNot(bool);
  void setHunger(int);
  void setHealth(int); 
  void setName(string);


};

#endif

