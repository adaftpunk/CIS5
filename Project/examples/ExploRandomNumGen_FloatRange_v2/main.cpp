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
    float minR,//min rand number detected
          maxR,//max rand number detected
          minRng,//min rand number desired
          maxRng,//max rand number desired
          randNum;//Random number achieved 
            
    //Initial Variables
    minRng=-101.7;
    maxRng=160.9;
    maxRand=(1<<15)-1; //2^15 -1 | << = shift, pow(2,15)-1
    randNum=1.0f*rand()/maxRand;//(0-1)
    minR=maxR=randNum*(maxRng-minRng)+minRng;//(minRng-maxRng)

    
    //Map the inputs to the outputs
 
    for(int test=0;test<100000;test++){
        randNum=1.0f*rand()/maxRand; //(0-1)
        //scale rand number
        randNum=randNum*(maxRng-minRng)+minRng; //(minRng-maxRng)
        if(randNum>maxR) maxR=randNum;
        if(randNum<minR) minR=randNum;
    }
    
    //scale range to any min and max desired
    
    
    //Display the inputs and outputs
    cout<<"The min rand number encountered = "<<minR<<endl;
    cout<<"The max rand number encountered = "<<maxR<<endl;
    
    //Exit the code
    return 0;
}

