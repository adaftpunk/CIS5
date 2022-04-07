/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 3, 2022, 8:50 PM
 * Purpose: Min/Max
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
    const int SENVAL=-99; //number to terminate input
    
    int num,             //inputted numbers
        min,            //min number
        max;           //max number
    
    //Initial Variables
    cin>>num;
    
    //Map the inputs to the outputs
    min=max=num;
    
    while(num != SENVAL)
    {

        if (num < min)
            min=num;
            
        if (num > max)
            max=num;
            
        cin>>num;
    }
    
    //Display the inputs and outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
    
    //Exit the code
    return 0;
}