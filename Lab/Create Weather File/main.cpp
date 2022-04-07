/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 24, 2022, 11:45 AM
 * Purpose: Create weather file 
 *          specifically 3 summer months June/July/August
 *          30 days per a month
 *          random rainy-R, cloudy-C, sunny-S days
 */
//System Libraries

#include <iostream> //Input/Output Library
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
    fstream out1,out2;
    const int SIZE=20;
    char fileNm1[SIZE]="weather1.dat";
    string fileNm2="weather2.dat";
    unsigned char nMonths,nDays;
            
    //Initial Variables
    out1.open(fileNm1,ios::out);
    out2.open(fileNm2,ios::out);
    nMonths=3;
    nDays=30;
    
    //Map the inputs to the outputs
    for(int month=1;month<=nMonths;month++){
        for(int day=1;day<=nDays;day++){
            char typDay=rand()%3;
            switch(typDay){
                case 0: out1<<'R';
                        out2<<'R'; 
                        cout<<'R';
                        break;
                case 1: out1<<'C';
                        out2<<'C'; 
                        cout<<'C';
                        break;
                case 2: out1<<'S';
                        out2<<'S'; 
                        cout<<'S';
                        break;       
                        
            }
        }
        cout<<endl;
        out1<<endl;
        out2<<endl;
    }
    
    //Display the inputs and outputs
    
    //Exit the code
    out1.close();
    out2.close();
    return 0;
}

