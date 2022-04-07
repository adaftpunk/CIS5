/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 27, 2022, 2:03 AM
 * Purpose: Book Reward Program
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
    int books; //number of books
    
    //Initial Variables
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>books;
    
    //Map the inputs to the outputs
    
    //Display the inputs and outputs
      if (books==0){
          cout<<"Books purchased =  "<<books<<endl;
          cout<<"Points earned   = 0";
      }
    
      else if (books == 1){
          cout<<"Books purchased =  "<<books<<endl;
          cout<<"Points earned   = 5";
      }
          else if (books == 2){
          cout<<"Books purchased =  "<<books<<endl;
          cout<<"Points earned   = 15";
      }
          else if (books == 3){
          cout<<"Books purchased =  "<<books<<endl;
          cout<<"Points earned   = 30";
      }
          else if (books >= 4){
          cout<<"Books purchased =  "<<books<<endl;
          cout<<"Points earned   = 60";
      }
    
    //Exit the code
    return 0;
}

