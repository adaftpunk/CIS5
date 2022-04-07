/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 5, 2022, 10:25 AM
 * Purpose: Menu with functions
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <iomanip>  //format library

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const float ACRFT2=43560;//Conversion from acres to ft^2
const float FTMILE=5280;//Number of feet to a mile

//Function Prototypes
void prblm1();
void prblm2();
void prblm3();
void prblm4();
// Program Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //repeat
    do{
    
       //Initial Variables
        cout<<"which problem would you like to run"<<endl;
        cout<<"Type 0 for Problem 1 Land Calculation"<<endl;
        cout<<"Type 1 for Problem 2"<<endl;
        cout<<"Type 2 for Problem 3"<<endl;
        cout<<"Type 3 for Problem 4"<<endl;
        cin>>choice;
    
        //Map the inputs to the outputs
        switch (choice){
          case'0':prblm1(); break;         
          case'1':prblm2(); break;
          case'2':prblm3(); break;
          case'3':prblm4(); break;
            }
    }while (choice >='0'&&choice<='3');
    
    //Display the inputs and outputs
    
    //Exit the code
    return 0;
}

void prblm1(){   
              float ft2,//Area in ft2
              nAcres;//Number of acres

              //Initial Variables
              cout<<"This program performs land calculations"<<endl;
              cout<<"Input the square footage to convert"<<endl;
              cin>>ft2;

              //Map the inputs to the outputs
              nAcres=ft2/ACRFT2;

              //Display the inputs and outputs
              cout<<"The square footage = "<<ft2<<" ft^2"<<endl;
              cout<<"The number of acres = "<<nAcres<<" acres"<<endl;
    
              }
void prblm2(){
    
              }
void prblm3(){
    
              }
void prblm4(){
    
              }