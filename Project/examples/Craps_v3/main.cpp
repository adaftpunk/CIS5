/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 7, 2022, 11:42 AM
 * Purpose: Craps - win,lose,roll again
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <cstdlib> // Random Number Gen
#include <ctime>  // set time

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
    unsigned int win,lose,rollAgn;
    unsigned int nGames;
   
    
    //Initial Variables
    win=lose=rollAgn=0;
    nGames=1000;
    
    //Map the inputs to the outputs
    for(int game=1;game<=nGames;game++){
        char die1=rand()%6+1;//[1-6]
        char die2=rand()%6+1;//[1-6]
        char sum=die1+die2;
        
        //record results
        if(sum==7 || sum==11)win++;
        else if(sum==2 ||sum==3 ||sum==12)lose++;
        else{ 
            rollAgn++;
            bool wnOrLos;
            
            do{               
                wnOrLos = true;
                die1=rand()%6+1;//[1-6]
                die2=rand()%6+1;//[1-6]
            char sum2=die1+die2;
            if(sum2==7){
                lose++;
                wnOrLos=false;
            }else if (sum2==sum){
                win++;
                wnOrLos=false;
            }
            }while(wnOrLos);
    }
    
    //Display the inputs and outputs
    cout<<"The total number of games = "<<nGames<<endl;
    cout<<"The total number of games = "<<win+lose+rollAgn<<endl;
    cout<<"Your wins = "<<win<<endl;
    cout<<"Your loses = "<<lose<<endl;
    cout<<"Roll again = "<<rollAgn<<endl;
    
    //Exit the code
    return 0;
}

