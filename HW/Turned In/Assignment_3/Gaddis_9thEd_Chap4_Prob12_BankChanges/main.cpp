/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 27, 2022, 3:06 AM
 * Purpose: Bank Charges
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <iomanip> //format library

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    const float TENC = 0.10,//10c for less than 20
                EIGHTC = 0.08,//9c for 20-39
                SIXC = 0.06,//6c for  40-59
                FOURC = 0.04,//4c for 60 plus
                MONFE = 10; //$10 monthly fee
               
                  
    float balance, //current balance
          cheFe,  //check fee
          loBal, //$0-15 low balance
          neBal; //new balance 
    int   checks;  //number of checks
    
    //Initial Variables
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>balance;
    cin>>checks;
    
    
    //Map the inputs to the outputs
    if (balance <0){
        cout<<"Urgent! Your account is overdrawn"<<endl;
    }
    
    if (balance < 400){
        loBal=15;
    }
    else if(balance >= 400){
        loBal=0;
    }
    
    
    if (checks >= 0 && checks < 20 ){
        cheFe=checks*TENC;
        neBal=balance-(cheFe+loBal+MONFE);
    }

    else if (checks >= 20 && checks <=39 ){
        cheFe=checks*EIGHTC;
        neBal=balance-(cheFe+loBal+MONFE);
    }
    
    else if (checks >= 40 && checks <= 59 ){
        cheFe=checks*SIXC;
        neBal=balance-(cheFe+loBal+MONFE);
    }
    
        else if (checks >= 60 ){
        cheFe=checks*FOURC;
        neBal=balance-(cheFe+loBal+MONFE);
    }
    
    //Display the inputs and outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    
    cout<<"Balance"<<setw(6)<<"$"<<setw(9)<<balance<<endl;
    cout<<"Check"<<setw(4)<<"Fee"<<setw(4)<<"$"<<setw(9)<<cheFe<<endl;
    cout<<"Monthly Fee"<<setw(2)<<"$"<<setw(9)<<MONFE<<endl;
    cout<<"Low Balance"<<setw(2)<<"$"<<setw(9)<<loBal<<endl;
    cout<<"New Balance "<<setw(1)<<"$"<<setw(9)<<neBal;
    //Exit the code
    return 0;
}

