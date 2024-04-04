#include "Game.h"
#include <iostream>
#include <fstream>
using namespace std;

//first function in Game class
void Game::start_game(){
  cout << "____________________________________________________________" << endl;  
  cout << endl;
  cout << "Welcome to Fish Tank Management!" << endl;
  
  cout << "____________________________________________________________" << endl;
  cout << endl;
  cout << "RULES OF THE GAME: " << endl;
  cout << "Choose either a turtle or a fish to continue with the game" << endl;
  cout << "Both aquatic animals have similar functions like -  next day, feed, treat and sell" << endl;
  cout << "Fish has a unique function called swim, whereas turtle has a unique function called crawl" << endl;
  cout << endl;
  cout << "When the game begins, you'll have a balance of 500 automatically. To win the game, you've to reach a balance of 1000" << endl;
  cout << "If your aquatic animal falls sick or you go too long without feeding it, it will die and you'll lose the game!" << endl;
  cout << endl;
  cout << "Happy playing!" << endl;
  cout << "____________________________________________________________" << endl;


  Fish a1;
  float userTemp, userpH, userVol;

  do{
    cout << "Enter the temperature you wish to set the fish tank at. (For this game, fish and turtles can exist in the range of 70-80 inclusive)" << endl;
    cin >> userTemp;
    cout << endl;
    cout << "Enter the pH level you wish to set the fish tank at. (fish and turtles can exist in a pH range of 7-8)" << endl;
    cin >> userpH;
    cout << endl;
    cout << "Lastly, enter the volume of your fish tank. (Less than 20 gallons will be too conjested for the animals to live in)" << endl;
    cin >> userVol;
  
    if (a1.check_environment(userTemp, userpH, userVol)){
      cout << "____________________________________________________________" << endl;
      cout << endl;
      cout << "Success! Aquatic animals can be added to this fish tank!" << endl;
    }
    else{
      cout << "____________________________________________________________" << endl;
      cout << endl;
      cout << "The values you entered are not conducive for fish and turtles, Please enter different values for your fish tank" << endl;
      cout << endl;
    }     
  }while(!a1.check_environment(userTemp, userpH, userVol));


  cout << "____________________________________________________________" << endl;  
  cout << "Please choose what pets you would like to buy!" << endl;
  cout << endl;
  cout << "We currently have fish and turtles to choose from." << endl;
  cout << endl;
  cout << "Fish:" << endl;

  cout << "      /`·.¸" << endl;
  cout << "     /¸...¸`·" << endl;
  cout << " ¸.·´  ¸   `·.¸.·´)" << endl;
  cout << "< @ ):´;      ¸  {" << endl;
  cout << " `·.¸ `·  ¸.·´`·.¸)" << endl;
  cout << "     `\\´´¸.·´" << endl;
  cout << "       \\'" << endl;

  cout << endl;
  
  cout << "Turtle: " << endl;
  cout << "   _____    ____" << endl;
  cout << "  /     \\  |  o | " << endl;
  cout << " |       |/ ___\\|" << endl; 
  cout << "|_________| " << endl;    
  cout << "|_|_| |_|_|" << endl;
  
  cout << endl;
  cout << "____________________________________________________________" << endl;
  cout << endl;
  cout << "Type a number to continue!" << endl;
  cout << "0 - End game" << endl;
  cout << "1 - Buy a new fish (30 balance needed)" << endl;
  cout << "2 - Buy a new turtle (40 balance needed)" << endl;  
  int start;
  
  while (cin >> start){
    cin.ignore();
    
    if (start == 0){
      cout << "Thank you for playing!" << endl;
      exit(0);
    }

    //fish stuff
    else if (start == 1){
      Fish f1;
      cout << "____________________________________________________________" << endl;
      cout << "You chose fish! What would you like to name your fish?" << endl;
      string petName;
      if (getline(cin, petName)){
        cout << "Welcome to the aquatic animals tank, " << petName << "!" << endl;
        f1.setName(petName);
        f1.setHealth(100);
        f1.setHunger(0);
        balance = balance - f1.getBuyPrice();
        cout << "____________________________________________________________" << endl;    
        int option;
      
        do {
          if (balance > 1000){
            cout << "**********************************************************" << endl;
            cout << "WIN!!!! You managed to succesfully raise your balance to 1000!" << endl;
            exit(0);
          }
          if (balance < 30){
            cout << "**********************************************************" << endl;
            cout << "You have too little money and cannot proceed with any of the options for your animals!" << endl;
            cout << "Better luck next time!" << endl;
            exit(0);
          }          
        
          if (f1.getHunger() > 80 || f1.getHealth() < 30){
            cout << "Your fish was either not fed properly or was too sick!" << endl;
            cout << "Your fish has died!" << endl;
            cout << "      /`·.¸" << endl;
            cout << "     /¸...¸`·" << endl;
            cout << " ¸.·´  ¸   `·.¸.·´)" << endl;
            cout << "< X ):´;      ¸  {" << endl;
            cout << " `·.¸ `·  ¸.·´`·.¸)" << endl;
            cout << "     `\\´´¸.·´" << endl;
            cout << "       \\'" << endl;          
            cout << "____________________________________________________________" << endl;          
            exit(0);
          }     
        
          cout << "What would you like your fish to do?" << endl;
          cout << "0 - Save and end game" << endl;
          cout << "1 - Make " << petName << " swim!" << endl;
          cout << "2 - Feed " << petName << endl;
          cout << "3 - Treat " << petName << endl;
          cout << "4 - Sell " << petName << endl;
          cout << "5 - See what the next day holds for " << petName << "!" << endl;
          cout << "____________________________________________________________" << endl;

          cin >> option;
          if (option==1){
            f1.swim();
            cout << "      /`·.¸" << endl;
            cout << "     /¸...¸`·" << endl;
            cout << " ¸.·´  ¸   `·.¸.·´)" << endl;
            cout << "< @ ):´;      ¸  {   #love swimming" << endl;
            cout << " `·.¸ `·  ¸.·´`·.¸)" << endl;
            cout << "     `\\´´¸.·´" << endl;
            cout << "       \\'" << endl; 
            f1.displayInfo();
            if (balance > 1000){
              cout << "**********************************************************" << endl;
              cout << "WIN!!!! You managed to succesfully raise your balance to 1000!" << endl;
              exit(0);
            }
          }
        
          else if (option == 2){
            if (f1.getHunger() == 0){
              cout << "____________________________________________________________" << endl;          
              cout << "Your fish is fully fed! Play with it to increase it's hunger levels" << endl;
            }
            else if (f1.getHunger() < 20){
              f1.setHunger(0);
              cout << "You fish has been fed!" << endl;
            }
            else if (f1.getHunger() > 20){
              f1.setHunger(f1.getHunger()-20);
              cout << "You fish has been fed!" << endl; 
            }
            f1.displayInfo();   
            if (balance > 1000){
              cout << "**********************************************************" << endl;
              cout << "WIN!!!! You managed to succesfully raise your balance to 1000!" << endl;
              exit(0);
            }
          }
            
          else if (option == 3){
            if (f1.getHealth() > 80){
              cout << "Your fish is healthy! Its health is now at 100" << endl;
              f1.setHealth(100);
            }
            else {
              f1.setHealth(f1.getHealth()+20);
              cout << "Your fish has been treated! It cost you 100" << endl;
            }
            //decrease balance
            balance = balance - 100;
            f1.displayInfo();
            if (balance > 1000){
              cout << "**********************************************************" << endl;
              cout << "WIN!!!! You managed to succesfully raise your balance to 1000!" << endl;
              exit(0);
            }
          }  

          else if (option==5){
            f1.next_day();
            f1.displayInfo();
            if (balance > 1000){
              cout << "**********************************************************" << endl;
              cout << "WIN!!!! You managed to succesfully raise your balance to 1000!" << endl;
              exit(0);
            }
          }

          else if (option==4){
            balance = balance + f1.getSellPrice();
            cout << "____________________________________________________________" << endl;        
            cout << "Sold! You earned " << f1.getSellPrice() << endl;
            cout << "Your new balance is now " << balance << endl;
            if (balance > 1000){
              cout << "**********************************************************" << endl;
              cout << "WIN!!!! You managed to succesfully raise your balance to 1000!" << endl;
              exit(0);
            }
            cout << endl;
            cout << "Type a number to continue!" << endl;
            cout << "0 - End game" << endl;
            cout << "1 - Buy a new fish (30 balance needed)" << endl;
            cout << "2 - Buy a new turtle (40 balance needed)" << endl;       
            break;
          }
        
          cout << "____________________________________________________________" << endl;        
        
        } while (option!=0);
      
      if (option == 0){
        cout << "You chose to save and exit the game! Please enter a filename for your save file of the type 'name.txt'" << endl;
        string saveFile;
        cin >> saveFile;
        ofstream fout;
        fout.open(saveFile);
        while (!fout){
          cout << "Please enter a valid filename!" << endl;
        }
        fout << "Fish name: " << petName << endl;
        fout << "Fish hunger level: " << f1.getHunger() << endl;
        fout << "Fish health level: " << f1.getHealth() << endl;
        fout << "Distance travelled by fish: " << f1.getDistance() << endl;
        fout << "Balance in the game: " << balance << endl;
        exit(0);
      }
        
    }
  }//eo fish stuff


    //turtle stuff
    else if (start == 2){
      Turtle t1;
      cout << "____________________________________________________________" << endl;
      cout << "You chose turtle! What would you like to name your turtle?" << endl;
      string petName;
      if (getline(cin, petName)){
        cout << "Welcome to the aquatic animals tank, " << petName << "!" << endl;
      
        t1.setName(petName);
        t1.setHealth(100);
        t1.setHunger(0);
        balance = balance - t1.getBuyPrice();
      
        cout << "____________________________________________________________" << endl;    
        int option;

        do {
          if (balance > 1000){
            cout << "**********************************************************" << endl;
            cout << "WIN!!!! You managed to succesfully raise your balance to 1000!" << endl;
            exit(0);
          }

          if (balance < 30){
            cout << "**********************************************************" << endl;
            cout << "You have too little money and cannot proceed with any of the options for your animals!" << endl;
            cout << "Better luck next time!" << endl;
            exit(0);
          }
        
          if (t1.getHunger() > 70 || t1.getHealth() < 20){
            cout << "Your turtle was either not fed properly or was too sick!" << endl;
            cout << "Your turtle has died!" << endl;
            cout << "   _____    ____" << endl;
            cout << "  /     \\  |  X | " << endl;
            cout << " |       |/ ___\\|" << endl; 
            cout << "|_________| " << endl;    
            cout << "|_|_| |_|_|" << endl;           
            cout << "____________________________________________________________" << endl;          
            exit(0);
          }
        
          cout << "What would you like your turtle to do?" << endl;
          cout << "0 - Save and end game" << endl;
          cout << "1 - Make " << petName << " crawl!" << endl;
          cout << "2 - Feed " << petName << endl;
          cout << "3 - Treat " << petName << endl;
          cout << "4 - Sell " << petName << endl;
          cout << "5 - See what the next day holds for " << petName << "!" << endl;
          cout << "____________________________________________________________" << endl;

          cin >> option;
          if (option==1){
            t1.crawl();
            cout << "   _____    ____" << endl;
            cout << "  /     \\  |  o | " << endl;
            cout << " |       |/ ___\\|   #love crawling" << endl; 
            cout << "|_________| " << endl;    
            cout << "|_|_| |_|_|" << endl; 
            cout << endl;
            t1.displayInfo();
          }
        
          else if (option == 2){
            if (t1.getHunger() == 0){
              cout << "____________________________________________________________" << endl;          
              cout << "Your turtle is fully fed! Play with it to increase it's hunger levels" << endl;
            }
            else if (t1.getHunger() < 20){
              t1.setHunger(0);
              cout << "You turtle has been fed!" << endl;
            }
            else if (t1.getHunger() > 20){
              t1.setHunger(t1.getHunger()-20);
              cout << "You turtle has been fed!" << endl;   
            }
            t1.displayInfo();  
            if (balance > 1000){
              cout << "**********************************************************" << endl;
              cout << "WIN!!!! You managed to succesfully raise your balance to 1000!" << endl;
              exit(0);
            }
          } 
            
          else if (option == 3){
            if (t1.getHealth() > 80){
              cout << "Your turtle is healthy! Its health is now at 100" << endl;
              t1.setHealth(100);
            }
            else {
              cout << "Your turtle has been treated! It cost you 120" << endl;
              t1.setHealth(t1.getHealth()+20);
            }
            //decrease balance
            balance = balance - 120; 
            t1.displayInfo();
            if (balance > 1000){
              cout << "**********************************************************" << endl;
              cout << "WIN!!!! You managed to succesfully raise your balance to 1000!" << endl;
              exit(0);
            }
          }    
            
          else if (option==4){
            balance = balance + t1.getSellPrice();
            cout << "____________________________________________________________" << endl;        
            cout << "Sold! You earned " << t1.getSellPrice() << endl;
            cout << "Your new balance is now " << balance << endl;
            cout << endl;
            if (balance > 1000){
              cout << "**********************************************************" << endl;
              cout << "WIN!!!! You managed to succesfully raise your balance to 1000!" << endl;
              exit(0);
            }
            cout << "Type a number to continue!" << endl;
            cout << "0 - End game" << endl;
            cout << "1 - Buy a new fish (30 balance needed)" << endl;
            cout << "2 - Buy a new turtle (40 balance needed)" << endl;            
            break;
          }
              
          else if (option==5){
            t1.next_day();
            t1.displayInfo();
            if (balance > 1000){
              cout << "**********************************************************" << endl;
              cout << "WIN!!!! You managed to succesfully raise your balance to 1000!" << endl;
              exit(0);
            }
          }
    
          cout << "____________________________________________________________" << endl;        
        } while (option!=0);
  
        if (option == 0){
        cout << "You chose to save and exit the game! Please enter a filename for your save file of the type 'name.txt'" << endl;
        string saveFile;
        cin >> saveFile;
        ofstream fout;
        fout.open(saveFile);
        while (!fout){
          cout << "Please enter a valid filename!" << endl;
        }
        fout << "Turtle name: " << petName << endl;
        fout << "Turtle hunger level: " << t1.getHunger() << endl;
        fout << "Turtle health level: " << t1.getHealth() << endl;
        fout << "Steps covered by turtle: " << t1.getSteps() << endl;
        fout << "Balance in the game: " << balance << endl;
        exit(0);
        }
      }
    }//eo turtle stuff
  }//eo while (cin>>start)
}//end of function 1




//second function of Game class
void Game::load_game(){
  string data;    
    cout << "____________________________________________________________" << endl; 
    cout << "What is the name of the file that you would like to load? Type the name of the file along with the trailing '.txt'" << endl;
     cout << "____________________________________________________________" << endl;  
    string filename;
    cin >> filename;
    ifstream fin(filename);
    while (!fin.is_open()){
      cout << "____________________________________________________________" << endl; 
      cout << "Sorry! The filename was incorrect or not in our records!" << endl;
      cout << "Please enter the filename again" << endl;
      cin >> filename;
    }

    while (!fin.eof()){
      getline (fin, data);
      cout << data; 
      cout << endl;
    }
    cout << "____________________________________________________________" << endl;
    fin.close();  
}
