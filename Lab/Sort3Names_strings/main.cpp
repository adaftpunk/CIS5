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
    string name1,name2,name3;
    
    //Initial Variables
    cout<<"Read in three names"<<endl;
    cin>>name1;
    cin>>name2;
    cin>>name3;
    
    //Map the inputs to the outputs
    if(name1<name2 && name2<name3){
        cout<<"Sorted order is "<<name1<<", "<<name2<<", "<<name3<<endl;
    }
    else if(name1<name3 && name3<name2){
        cout<<"Sorted order is "<<name1<<", "<<name3<<", "<<name2<<endl;
    }    
    else if(name2<name1 && name1<name3){
        cout<<"Sorted order is "<<name2<<", "<<name1<<", "<<name3<<endl;
    }
    else  if(name2<name3 && name3<name1){
        cout<<"Sorted order is "<<name2<<", "<<name3<<", "<<name1<<endl;
    }
    else  if(name3<name1 && name1<name2){
        cout<<"Sorted order is "<<name3<<", "<<name1<<", "<<name2<<endl;
    }
    else  if(name3<name2 && name2<name1){
        cout<<"Sorted order is "<<name3<<", "<<name2<<", "<<name1<<endl;
    }
    //Display the inputs and outputs
    
    //Exit the code
    return 0;
}

