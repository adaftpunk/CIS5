/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 3, 2022, 11:56 PM
 * Purpose: Pattern
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
    const int MIN=0; //min number
    int max, //inputted max
        stop, //to stop pattern
         s, //symbol start
         r; //row count         
    char sym = '+'; //symbol
    
    //Initial Variables
    cin>>max;
    
    //Map the inputs to the outputs
   for(s = MIN; s < max; s++)
    {
        for(r = MIN;r <= s; r++)
        {
            cout<<sym;
        }
        cout<<endl;
        cout<<endl;
    }
    for(s = MIN; s < max; s++)
    {
        for(r = max; r > s; r--)
        {
            cout<<sym;
 
            }
            
        stop=max-1;
            if (s == stop ){
            cout<<"";
            }
                else {
                cout<<endl;
                cout<<endl;
                }
                     
    }
 
    
    
    //Display the inputs and outputs
    
    //Exit the code
    return 0;
}