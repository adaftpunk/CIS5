/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 5, 2022, 10:25 AM
 * Purpose: Menu with out functions
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
    //Declare Variables
    char choice;
    
    //repeat
    do{
    
       //Initial Variables
        cout<<"which problem would you like to run"<<endl;
        cout<<"Type 0 for Problem 1"<<endl;
        cout<<"Type 1 for Problem 2"<<endl;
        cout<<"Type 2 for Problem 3"<<endl;
        cout<<"Type 3 for Problem 4"<<endl;
        cin>>choice;
    
        //Map the inputs to the outputs
        switch (choice){
          case'0':cout<<"Homework problem 1"<<endl; break;
          case'1':cout<<"Homework problem 2"<<endl; break;
          case'2':cout<<"Homework problem 3"<<endl; break;
          case'3':cout<<"Homework problem 4"<<endl; break;
            }
    }while (choice >='0'&&choice<='3');
    
    //Display the inputs and outputs
    
    //Exit the code
    return 0;
}

