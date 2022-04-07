/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 4, 2022, 7:07 PM
 * Purpose: max
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <iomanip> //format library

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes
float maximum(float firNum,float secNum)
{
 return firNum > secNum ? firNum : secNum;   
}

float maximum(float firNum, float secNum, float thiNum)
{
    return maximum(maximum(firNum,secNum), thiNum);
}

// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    float  firNum,
           secNum,
           thiNum,
           lO2,
           lO3; 
    
    //Initial Variables
    cout<<"Enter first number:"<<endl;
    cin>>firNum;
    cout<<endl;
    cout<<"Enter Second number:"<<endl;
    cin>>secNum;
    cout<<endl;
    cout<<"Enter third number:"<<endl;
    cin>>thiNum;
    cout<<endl;

    //Map the inputs to the outputs
    lO2=maximum(firNum,secNum);
    lO3=maximum(firNum,secNum,thiNum);
    
    //Display the inputs and outputs
    cout<<fixed<<setprecision(1)<<showpoint;  
    
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<lO2<<endl;      
    cout<<endl;
    cout<<"Largest number from three parameter function:"<<endl;
    cout<<lO3<<endl;
    //Exit the code
    return 0;
}
