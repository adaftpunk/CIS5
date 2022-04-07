/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on March 29, 2022, 12:15 AM
 * Purpose: Retirement Savings Table
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <iomanip>  //Format Library

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const char PERCENT=100;//Percent Conversion

//Function Prototypes

// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    float balance,//Starting balance $s
          intRate,//Interest in %
          savings,//Savings accumulated $s
          salary,//salary $ per a year
          retDep,//%deposited for retirement
          sav2Ret;//savings to retire  
    int   initD8,//Initial Date/Year
          numCmpd;//Number of years,compounding period  
    
    //Initial Variables
    balance=0e2f;//$100
    intRate=5.0/PERCENT;//6 percent
    initD8=2022;//This year
    numCmpd=50;//12 years
    savings=balance;   
    salary=1e5f;//$100,00
    retDep=20.0f/PERCENT;//% allocated to retirement
    sav2Ret=salary/intRate;//savings required to retire        
            
    
    
    //Map the inputs to the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"      $"<<savings<<"     =  Initial Balance in $s"<<endl;
    cout<<"        "<<intRate*PERCENT<<"%     = Interest Rate %"<<endl;
    cout<<"      $"<<salary<<"  = Salary to retire with"<<endl;
    cout<<"        "<<retDep*PERCENT<<"%    = Retirement deposited %"<<endl;
    cout<<"     $"<<sav2Ret<<"  =  Savings to retire $s"<<endl;
    cout<<endl;
    cout<<"             Balance         Interest        Yearly"<<endl;
    cout<<"Year  Date  Beg of Year     End of year      Deposit"<<endl;
    int year;
    float interest;
    float yrlyDep;
    
    for(year=0;year<=numCmpd && savings<sav2Ret;year++)
     {
        interest=savings*intRate;
        yrlyDep=salary*retDep;
        cout<<setw(4)<<year<<setw(6)<<initD8
                <<"  $"<<setw(10)<<savings
                <<"     $"<<setw(9)<<interest
                <<"     $"<<setw(9)<<yrlyDep<<endl;
        initD8++;
        savings+=interest;
        savings+=yrlyDep;
     }
    interest=savings*intRate;
    yrlyDep=salary*retDep;
      cout<<setw(4)<<year<<setw(6)<<initD8
          <<"  $"<<setw(9)<<savings
          <<"     $"<<setw(9)<<interest
          <<"     $"<<setw(9)<<yrlyDep<<endl;
    
    //Display the inputs and outputs
    
    //Exit the code
    return 0;
}

