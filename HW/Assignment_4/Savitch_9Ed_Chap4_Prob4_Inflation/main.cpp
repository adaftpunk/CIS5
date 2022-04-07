/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 4, 2022, 3:07 AM
 * Purpose: Inflation
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <iomanip> //format library

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes
float infFunc(float cuPri,float yrAgPri)
{
    float r;
    r=((cuPri-yrAgPri)/yrAgPri)*100;
    return r;
}
// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    char choice;
    float infRate,
          cuPri,
          yrAgPri;
    
    //Initial Variables
    
    do
    {
    cout<<"Enter current price:"<<endl;
    cin>>cuPri;
    cout<<"Enter year-ago price:"<<endl;
    cin>>yrAgPri;

    infRate=infFunc(cuPri,yrAgPri);
    
    cout<<fixed<<setprecision(2)<<showpoint;
    
    cout<<"Inflation rate: "<<infRate<<"%"<<endl;
    cout<<endl;
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