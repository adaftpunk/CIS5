/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 31, 2022, 5:11 PM
 * Purpose: Pay in Pennies
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <iomanip> //Format library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables  
    unsigned int numDays, //days inputted
                 dollars, //dollars
                 payP,    //pay in pennies       
                 pennies = 1,  //pennies
                 pay    =0;     //end pay
    int day;             //day count for loop
   // cout<<fixed<<showpoint<<setprecision(2);
    //Initial Variables
    cin>>numDays;
    
    //Map the inputs to the outputs
    while(numDays < 1)
       {
          cout<<"Error";
          cin>>numDays;
       }

    for(day = 0; day < numDays; day++)
       { 
        pay+=pennies;
       pennies=pennies*2;
       }
    dollars=pay/100;
    payP=pay%100;
   
    //Display the inputs and outputs
    if (numDays < 4){
        cout<<"Pay = $"<<dollars<<".0"<<payP;
        }
        else{
            cout<<"Pay = $"<<dollars<<"."<<payP;
        }

    
    //Exit the code
    return 0;
}

