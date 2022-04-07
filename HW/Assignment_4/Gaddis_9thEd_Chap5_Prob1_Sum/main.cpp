/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 31, 2022, 5:01 PM
 * Purpose: Template
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
    int num1, //inputted number
        total = 0;   
    
    //Initial Variables
    cin>>num1;
    
    //Map the inputs to the outputs
        while (num1 < 0)
    {
        cout << "error";
        cin >> num1;
    }

    for (int i = 1; i <= num1; i++)
    {

        total += i;
    }
    
    //Display the inputs and outputs
     
      cout <<"Sum = "<<total;
    
    //Exit the code
    return 0;
}

