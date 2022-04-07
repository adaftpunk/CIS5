/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 7, 2022, 10:13 AM
 * Purpose: Craps Rolling Dice
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <cstdlib> // Random Number Gen
#include <ctime>  // set time
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int nThrows; //number of throws
    unsigned int f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12; //frequency of each throw
    
    //Initial Variables
    nThrows=36000;
    f2=f3=f4=f5=f6=f7=f8=f9=f10=f11=f12=0;
    
    //Map the inputs to the outputs
    for(int toss=1;toss<=nThrows;toss++){
        char die1=rand()%6+1;//[1-6]
        char die2=rand()%6+1;//[1-6]
        char sum=die1+die2;
        switch (sum){
            case 2:f2++;break;
            case 3:f3++;break;
            case 4:f4++;break;
            case 5:f5++;break;
            case 6:f6++;break;
            case 7:f7++;break;
            case 8:f8++;break;
            case 9:f9++;break;
            case 10:f10++;break;
            case 11:f11++;break;
            case 12:f12++;break;
            default: cout<<"if you get here something is wrong"<<endl;
        }
    }
    
    //Display the inputs and outputs
    cout<<"Number of times 2 dice where thrown = "<<nThrows<<endl;
    cout<<"Number of times 2 dice where thrown = "
            <<f2+f3+f4+f5+f6+f7+f8+f9+f10+f11+f12<<endl;
    cout<<"sum = 2 -> was throw ->"<<f2<<" times"<<endl;
    cout<<"sum = 3 -> was throw ->"<<f3<<" times"<<endl;
    cout<<"sum = 4 -> was throw ->"<<f4<<" times"<<endl;
    cout<<"sum = 5 -> was throw ->"<<f5<<" times"<<endl;
    cout<<"sum = 6 -> was throw ->"<<f6<<" times"<<endl;
    cout<<"sum = 7 -> was throw ->"<<f7<<" times"<<endl;
    cout<<"sum = 8 -> was throw ->"<<f8<<" times"<<endl;
    cout<<"sum = 9 -> was throw ->"<<f9<<" times"<<endl;
    cout<<"sum = 10 -> was throw ->"<<f10<<" times"<<endl;
    cout<<"sum = 11 -> was throw ->"<<f11<<" times"<<endl;
    cout<<"sum = 12 -> was throw ->"<<f12<<" times"<<endl;
    
    //Exit the code
    return 0;
}

