/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 27, 2022, 8:49 PM
 * Purpose: ISP packages
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <iomanip> //format library

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    const float PACA=9.95, //package A price
                AHOU=2, //A add hour cost after 10
                PACB=14.95,//package B price
                BHOU=1,//B add hour cost after 20
                PACC=19.95;//package C price
    char pacLet; //user input latter
    int  hours, //user input hour
         adHou; //additional hour charge
    float bill; //total bill
    
    //Initial Variables
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>pacLet;
    cin>>hours;
    
    //Map the inputs to the outputs
    switch (pacLet)
    {
        case 'a':
        case 'A': if (hours > 10){
                adHou=(hours/10)*AHOU;
                bill=PACA+adHou;
                }
                   else bill=PACA;
        break;
                         
        case 'b':
        case 'B': if(hours > 20){
                adHou=(hours/20) *BHOU;
                bill=PACB+adHou;
                }
            else bill=PACB;
        break;
        
        case'c':
        case 'C': bill=PACC;
        break;
        
    }
    //Display the inputs and outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    
    cout<<"Bill = $ "<<bill;       
    
    //Exit the code
    return 0;
}


