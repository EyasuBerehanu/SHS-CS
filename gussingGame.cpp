//Eyasu Berehanu Gussing Game 9/11/2024
//1. No global variables. (Global constants are all right.)

//2. No strings. Not ever. (You can use cstrings/character arrays, and the cstring and cctype libraries are okay. In fact, I recommend using strcmp and strlen in your projects.)

//3. You should include <iostream>, not stdio. (This applies more to C programmers.) Also, use "new" and "delete" instead of "malloc" and "free".


#include <iostream>

using namespace std;

int main(){
  int input = 0;
  string Play = "Y";
  int trys = 0;
  srand((unsigned) time(NULL)); //sets the random seed
 int random = 1 + (rand() % 100);  //assigns a random number
 
     while(Play == "Y" || Play == "y"){ // contiunes the game if Y is inputed after the game ends
      cout << "Enter a Number 1-100!" << endl; //ask for a value inbetween 1 and 100
      //if you want to check if there is a random # being outputed
      // cout << "delete later random num is: " << random << endl;
      cin >> input;

      while(input != random){
         if(input > random && input <= 100){  //checks if number is too high and ask to guess again
          cout << "You Entered: " << input << endl;
          cout << "That guess was too high try again" << endl; 
          cin >> input;
          trys++; //adds a point every time a number is gusses (spread through every if statment)
        }
        if(input < random && input >= 1){  //checks if number is too low and ask to guess again
            cout << "You Entered: " << input << endl;
          cout << "That guess was too low try again" << endl;
          cin >> input;
          trys++;
        }
        if(input < 1){  //checks if number goes under 1 - 100 and ask it to guess again
            cout << "You Entered: " << input << endl;
            cout << "That Guess was WAY too low (# between 1 - 100 please)" << endl;
            cin >> input;
            trys++;
        } 
        if(input > 100){ //checks if number goes over 1 - 100 and ask it to guess again
            cout << "You Entered: " << input << endl;
            cout << "That Guess was WAY too high (# between 1 - 100 please)" << endl;
            cin >> input;
            trys++;
        }
        
        }
        if(input == random){ //checks if number is equal to the random guess
          trys++;
	  cout << "It took " << trys << " try(s)" << endl;
          cout << "You Guessed the right number!!! Play again? (y/n)" << endl;
          random = 1 + (rand() % 100); //assigns a new random number after game is completed 
          trys = trys - trys; // rests amount of trys to 0 when game was over
          cin >> Play;
            if (Play == "N" || Play == "n"){ // ends the game if player chooses N or n
                cout << "Thanks For Playing!!!" << endl;
                break; // ends game
           
            }
        }
    }
}
