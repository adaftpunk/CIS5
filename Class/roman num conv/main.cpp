/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on march 22, 2022, 9:45 AM
 * Purpose: roman numeral conversion
 */
//System Libraries

#include <iostream>  //Input/Output Library
#include <cstdlib>  //Random function
#include <ctime>   //Time library
#include <cstring> //string library

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
    string rmNmrl;          //Roman Numeral Rep
    unsigned short nmCnvrt; //Number to convert
    unsigned char n1000s,   //Number of 1000s
                   n100s,   //Number of 100s
                   n10s,    //Number of 10s
                   n1s;     //Number of 1's
            
    //Initial Variables
    nmCnvrt=rand()%3000+1; //[1-3000]
    rmNmrl=" ";
            
    //Convert Each Place
    n1000s=nmCnvrt/1000;              //Number of 1000s 
    n100s=(nmCnvrt-n1000s*1000)/100;  //Number of 100s
    n10s=nmCnvrt%100/10;              //Number of 10s
    n1s=nmCnvrt%10;                   //Number of 1s
    
    
    //Map the inputs to the outputs
    
    //Display the inputs and outputs
        cout<<"See if the result is equal "<<nmCnvrt
            <<" = "<<static_cast<int>(n1000s)<<static_cast<int>(n100s)
            <<static_cast<int>(n10s)<<static_cast<int>(n1s)<<endl;
        
    //Switch statement to convert the 1000s   
        switch(n1000s){
            case 3:rmNmrl+="M";
            case 2:rmNmrl+="M";
            case 1:rmNmrl+="M";      
        }
    
    //Independent if's to convert 100s
        if(n100s==9) rmNmrl+="CM"; 
        if(n100s==8) rmNmrl+="DCCC";
        if(n100s==7) rmNmrl+="DCC";
        if(n100s==6) rmNmrl+="DC";
        if(n100s==5) rmNmrl+="D";
        if(n100s==4) rmNmrl+="CD";
        if(n100s==3) rmNmrl+="CCC";
        if(n100s==2) rmNmrl+="CC";
        if(n100s==1) rmNmrl+="C";
    
    //Ternary operator to convert 10s
        rmNmrl+=n10s==9?"XC":
                n10s==8?"LXXX":
                n10s==7?"LXX":
                n10s==6?"LX":
                n10s==5?"L":
                n10s==4?"XL":
                n10s==3?"XXX":
                n10s==2?"XX":"X";
                      
        
    //Dependent if's to convert 1s
        if(n1s==9)      rmNmrl+= "IX";
        else if(n1s==8) rmNmrl+="VIII";
        else if(n1s==7) rmNmrl+="VII";
        else if(n1s==6) rmNmrl+="VI";
        else if(n1s==5) rmNmrl+="V";
        else if(n1s==4) rmNmrl+="IV";
        else if(n1s==3) rmNmrl+="III";
        else if(n1s==2) rmNmrl+="II";
        else if(n1s==1) rmNmrl+="I";
        
    
    //Display results
        cout<<"Roman Numeral "<<rmNmrl<<" = "<<nmCnvrt<<endl;
        
    //Exit the code
    return 0;
}

