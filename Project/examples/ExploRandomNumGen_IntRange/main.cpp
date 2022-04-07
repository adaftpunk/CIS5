/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 7, 2022, 10:33 AM
 * Purpose: explore random number gen for int 
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
    int minRand,//min rand number desired
        maxRand,//max rand number desired    
        randNum;//Random number achieved 
            
    //Initial Variables
    minRand=10;
    maxRand=99;
    
    
    //Map the inputs to the outputs
    for(int test=0;test<100;test++){
        randNum=rand()%(maxRand-minRand+1)+minRand;
        cout<<randNum<<"  ";
        if(test%10==9)cout<<endl;
    }
    
    //Display the inputs and outputs
 
    
    //Exit the code
    return 0;
}

