/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 25, 2022, 3:40 AM
 * Purpose: Sort 3 names
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <cstring>  //String Compare

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
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1;
    cin>>name2;
    cin>>name3;
    
    //Map the inputs to the outputs
    if(name1<name2 && name2<name3){
        cout<<name1<<endl;
        cout<<name2<<endl;
        cout<<name3;
    }
    else if(name1<name3 && name3<name2){
        cout<<name1<<endl;
        cout<<name3<<endl;
        cout<<name2;
    }    
    else if(name2<name1 && name1<name3){
        cout<<name2<<endl;
        cout<<name1<<endl;
        cout<<name3;
    }
    else  if(name2<name3 && name3<name1){
        cout<<name2<<endl;
        cout<<name3<<endl;
        cout<<name1;
    }
    else  if(name3<name1 && name1<name2){
        cout<<name3<<endl;
        cout<<name1<<endl;
        cout<<name2;
    }
    else  if(name3<name2 && name2<name1){
        cout<<name3<<endl;
        cout<<name2<<endl;
        cout<<name1;
    }
    return 0;
}

