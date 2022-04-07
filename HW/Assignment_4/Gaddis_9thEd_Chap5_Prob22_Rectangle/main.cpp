/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 3, 2022, 10:25 PM
 * Purpose: Rectangle
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
    int num,  //number inputted
        col,  //column
        stop, //to mske column stop
        row;  //row
    char let; //letter inputted
    
    //Initial Variables
    cin>>num;
    cin>>let;
    while ( num > 15 || num < 0 )
       {
        cout<<"error";
        cin>>num;
        cin>>let;
        }
    
    for (col = 0; col < num; col++)
     {
       for (row = 0; row < num; row++ )
        {
           cout<<let;

        }
           stop = num-1;    
         
         if (col == stop)
                {
                cout<<"";
                }
            else{
                cout<<endl;
                }  
      }

    
    //Map the inputs to the outputs
    
    //Display the inputs and outputs
    
    //Exit the code
    return 0;
}