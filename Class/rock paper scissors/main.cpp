/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 22, 2022, 10:36 AM
 * Purpose: Rock Paper scissors
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <cstdlib>  //Random function
#include <ctime>   //Time library
#include <cstring> //string library

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char p1,p2; //Two players in game
    string win; //Winner
    
    //Initial Variables
    char play=rand()%3;
    
    p1=play==0?'R':
       play==1?'P':'S';  
    
    p2=play==0?'R':
       play==1?'P':'S'; 
    
    //Map the inputs to the outputs
    if(p1==p2)win="Tie";
    
    else if(p1=='S'){
        if(p2=='R')win="Player 2";
        else win="Player 1";        
    }
    else if(p1=='P'){
        if(p2=='S')win="Player 2";
        else win="Player 1";        
    }
    else if(p1=='R'){
        if(p2=='P')win="Player 2";
        else win="Player 1";        
    }
    
    //Display the inputs and outputs
    cout<<"Player 1 = "<<p1<<endl;
    cout<<"player 2 = "<<p2<<endl;
    cout<<"Who Won? -> "<<win<<endl;
    
    //Exit the code
    return 0;
}

