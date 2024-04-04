/* 
Author: Naumi Aparanji
nsaparanji@uh.edu
University of Houston
Computer Science 2026
*/

#include <iostream>
#include <fstream>
using namespace std;
#include <string>
#include "FishTank.h"
#include "Fish.h"
#include "Turtle.h"
#include "Game.h"

int main() {

  int gameOption;
  
  cout << "____________________________________________________________" << endl; 
  cout << endl;
  cout << "Welcome to Fish Tank Management" << endl;
  cout << "Type 1 - if you would like to load an existing game" << endl;
  cout << "Type 2 - if you would like to create a new game" << endl;
  cout << "____________________________________________________________" << endl; 
  cin >> gameOption;

    
  if (gameOption == 1){
    Game newGame;
    newGame.load_game();
  }

  else if (gameOption == 2){
    Game newGame;
    newGame.start_game();    
  }
  
  return 0;
}