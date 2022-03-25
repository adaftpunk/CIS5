/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 22, 2022, 11:27 AM
 * Purpose: Sort 3 names
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <cstring> //Utilize string compare

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    const int SIZE=10;
    char name1[SIZE],name2[SIZE];
    
    //Initial Variables
    cout<<"Read in two names"<<endl;
    cin>>name1;
    cin>>name2;
    
    //Map the inputs to the outputs
    if(strcmp(name1,name2)==0){
        cout<<"the names are the same"<<name1<<","<<name2<<endl;
    }
    else if(strcmp(name1,name2)<0){
        cout<<"Sorted order is "<<name1<<","<<name2<<endl;
    }    
    else{
        cout<<"Sorted order is "<<name2<<","<<name1<<endl;
    }
    //Display the inputs and outputs
    cout<<"Name to sort = "<<name1<<endl;
    cout<<"Name to sort = "<<name2<<endl;
    
    //Exit the code
    return 0;
}

