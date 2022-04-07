/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 4, 2022, 1:31 AM
 * Purpose: MPG
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <iomanip> //format library

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes
float mpgFun (int milTr, int litGas, const float LITGALL)
 {
    float r;
    r=milTr/(litGas*LITGALL);
    return r;
  }

// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    const float LITGALL = 0.264179; //litter in a gallon
    int litGas, //liters of gas
         milTr;  //miles traveled
    float mpg; //miles per a gallon
    char choice; //user inputted choice
    
    //Initial Variables
    do
    {
    cout<<"Enter number of liters of gasoline:"<<endl;
    cout<<endl;
    cin>>litGas;
    cout<<"Enter number of miles traveled:"<<endl;
    cout<<endl;
    cin>>milTr;
    
    mpg = mpgFun(milTr, litGas, LITGALL);
    
    cout<<fixed<<setprecision(2)<<showpoint;
    
    cout<<"miles per gallon:"<<endl;
    cout<<mpg<<endl;
    cout<<"Again:"<<endl;
    cin>>choice;
    
        
    if (choice == 'Y' || choice == 'y')
    {
        cout<<endl;
    }
        else 
        {
            cout<<"";
        }
        }
    while (choice == 'Y' || choice == 'y');


    
    //Map the inputs to the outputs
    
    //Display the inputs and outputs
    
    //Exit the code
    return 0;
}

