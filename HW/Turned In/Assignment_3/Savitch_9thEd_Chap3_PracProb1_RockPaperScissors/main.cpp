/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 25, 2022, 4:00 PM
 * Purpose: Rock, Paper, Scissors
 */
//System Libraries

#include <iostream> //Input/Output Library

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    char p1,p2; //Player 1 and Player 2
    
    //Initial Variables
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>p1;
    cin>>p2;         
    
    //Map the inputs to the outputs      
               
        
        if (p1 == 'R' && p2 == 'S' || p1 == 'r' && p2 == 's' 
                || p1 == 'S' && p2 == 'R' || p1 == 's' && p2 == 'r')
        { 
            cout<<"Rock breaks scissors.";
        }

          else if (p1 == 'S' && p2=='P' || p1 == 's' && p2 == 'p' 
                  || p1 == 'P' && p2 == 'S' || p1 == 'p' && p2 == 's')
              {      
              cout<<"Scissors cuts paper.";
              }
    
             else if (p1 == 'P' && p2=='R' || p1 == 'p' && p2=='r' 
                     || p1 == 'R' && p2 == 'P' || p1 == 'r' && p2 == 'p')
                 {
                  cout<<"Paper covers rock.";
                 }

                  else if (p1==p2)
                {
                 cout<<"Nobody Wins.";
                }  
    //Display the inputs and outputs
    
    //Exit the code
    return 0;
}

