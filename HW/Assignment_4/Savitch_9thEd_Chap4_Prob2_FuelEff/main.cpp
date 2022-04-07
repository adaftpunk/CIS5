/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 4, 2022, 2:46 AM
 * Purpose: Fuel Eff.
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
    float c1MPG; //miles per a gallon
    float c2MPG; //miles per a gallon
    char choice; //user inputted choice
    
    //Initial Variables
     do
    {
    cout<<"Car 1"<<endl;    
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>litGas;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>milTr;
    
    c1MPG = mpgFun(milTr, litGas, LITGALL);
    
    cout<<fixed<<setprecision(2)<<showpoint;
    
    cout<<"miles per gallon: ";
    cout<<c1MPG<<endl;
    cout<<endl;
    
    cout<<"Car 2"<<endl;    
    cout<<"Enter number of liters of gasoline:"<<endl;
    cin>>litGas;
    cout<<"Enter number of miles traveled:"<<endl;
    cin>>milTr;
    
    c2MPG = mpgFun(milTr, litGas, LITGALL);
    
    cout<<fixed<<setprecision(2)<<showpoint;
    
    cout<<"miles per gallon: ";
    cout<<c2MPG<<endl;
    cout<<endl;
    
    if (c1MPG > c2MPG)
        {  
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<endl;
         }
       else 
         { 
          cout<<"Car 2 is more fuel efficient"<<endl;
          cout<<endl;
         }
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