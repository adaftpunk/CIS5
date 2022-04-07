/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 7, 2022, 10:42 AM
 * Purpose: explore random number gen for floats
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
    unsigned int minRand,//min rand number desired
                 maxRand,//max rand number desired    
                 randNum;//Random number achieved 
            
    //Initial Variables
    minRand=maxRand=rand();
    
    
    //Map the inputs to the outputs
    for(int test=0;test<100000;test++){
        randNum=rand();
        if(randNum>maxRand) maxRand=randNum;
        if(randNum<minRand) minRand=randNum;
    }
    
    //Display the inputs and outputs
    cout<<"The min rand number encountered = "<<minRand<<endl;
    cout<<"The max rand number encountered = "<<maxRand<<endl;
    
    //Exit the code
    return 0;
}

