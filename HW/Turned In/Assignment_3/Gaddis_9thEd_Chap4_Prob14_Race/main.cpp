/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 27, 2022, 3:10 PM
 * Purpose: Race times
 */
//System Libraries

#include <iostream> //Input/Output Library

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    const int SIZE=6;
    char run1[SIZE],run2[SIZE],run3[SIZE]; //runners
    unsigned run1Ti,run2Ti,run3Ti;//runners time
    
    //Initial Variables
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>run1;
    cin>>run1Ti;
    cin>>run2;
    cin>>run2Ti;
    cin>>run3;
    cin>>run3Ti;
    
    
    //Map the inputs to the outputs
 if (run1Ti < 0 || run2Ti < 0 || run3Ti < 0)
      {
        cout<<"Error";
      }
    
    else 
      {
        if (run1Ti < run2Ti){
          if (run1Ti < run3Ti){
            cout<<run1<<"\t"<<run1Ti<<endl;
            if (run2Ti < run3Ti){
                cout<<run2<<"\t"<<run2Ti<<endl;
                cout<<run3<<"\t"<<run3Ti; 
            }
            else 
              {
              cout<<run3<<"\t"<<" "<<run3Ti<<endl;
              cout<<run2<<"\t"<<run2Ti;
              }
          } 
        }
      }
    
         if (run2Ti < run1Ti){
          if (run2Ti < run3Ti){
            cout<<run2<<run2Ti<<endl;
            if (run1Ti < run3Ti){
                cout<<run1<<"\t"<<run1Ti<<endl;
                cout<<run3<<"\t"<<" "<<run3Ti; 
            }
            else 
              {
              cout<<run3<<"\t"<<" "<<run3Ti<<endl;
              cout<<run1<<"\t"<<run1Ti;
              }
          } 
        }
    
         if (run3Ti < run2Ti){
          if (run3Ti < run1Ti){
            cout<<run3<<"\t"<<" "<<run3Ti<<endl;
            if (run1Ti < run2Ti){
                cout<<run1<<"\t"<<run1Ti<<endl;
                cout<<run2<<"\t"<<run2Ti; 
            }
            else 
              {
              cout<<run2<<"\t"<<run2Ti<<endl;
              cout<<run1<<"\t"<<run1Ti;
              }
          } 
        }
    //Exit the code
    return 0;
}