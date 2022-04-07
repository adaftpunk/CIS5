/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 7, 2022, 10:42 AM
 * Purpose: random number gen between 0-1
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
    unsigned int maxRand;//max rand from rand() function
    float minR,//min rand number desired
          maxR,//max rand number desired 
          randNum;//Random number achieved 
            
    //Initial Variables
    maxRand=(1<<15)-1; //2^15 -1 | << = shift, pow(2,15)-1
    minR=maxR=1.0f*rand()/maxRand;
   
    
    
    //Map the inputs to the outputs
 
    for(int test=0;test<100000;test++){
        randNum=1.0f*rand()/maxRand;
        if(randNum>maxR) maxR=randNum;
        if(randNum<minR) minR=randNum;
    }
    
    //Display the inputs and outputs
    cout<<"The min rand number encountered = "<<minR<<endl;
    cout<<"The max rand number encountered = "<<maxR<<endl;
    
    //Exit the code
    return 0;
}

