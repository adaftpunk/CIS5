/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 24, 2022, 11:45 AM
 * Purpose: Read weather file 
 *          specifically 3 summer months June/July/August
 *          30 days per a month
 *          random rainy-R, cloudy-C, sunny-S days
 */
//System Libraries

#include <iostream>  //Input/Output Library
#include <fstream>  //File library I/O
#include <cstdlib> //Random function
#include <ctime>  //Time library

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
    fstream in1,in2;
    const int SIZE=20;
    char fileNm1[SIZE]="weather1.dat";
    string fileNm2="weather2.dat";
    unsigned char nMonths,nDays;
            
    //Initial Variables
    in1.open(fileNm1,ios::in);
    in2.open(fileNm2,ios::in);
    nMonths=3;
    nDays=30;
    
    //The First File Contents 
    cout<<"weather1.dat file content"<<endl;
    for(int month=1;month<=nMonths;month++){
        for(int day=1;day<=nDays;day++){
            char weather;
            in1>>weather;
            cout<<weather;
            }
        cout<<endl;
    }
    
    //The Second File Contents
    cout<<endl<<"weather2.dat file content"<<endl;
    for(int month=1;month<=nMonths;month++){
        for(int day=1;day<=nDays;day++){
            char weather;
            in2>>weather;
            cout<<weather;
            }
        cout<<endl;
    }
    
    //Display the inputs and outputs
    
    //Exit the code
    in1.close();
    in2.close();
    return 0;
}

