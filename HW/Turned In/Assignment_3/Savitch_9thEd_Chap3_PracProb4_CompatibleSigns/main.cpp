/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on February 15, 2022, 11:49 AM
 * Purpose: Compatible Signs
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <cstring>

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    string sign1,sign2;//Input signs
            
    
    //Initial Variables
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1;
    cin>>sign2;        
    
    //Map the inputs to the outputs
    
    //Display the inputs and outputs

    if(sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius")
     { 
        if(sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius")
        cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";
         else 
          cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
       }

    else if(sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn")
      {
        if(sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn")
           cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
          else 
           cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
       }

    else if(sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius")
         {
           if(sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius")
           cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
            else 
             cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
       }
    else if(sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces")
         {
           if(sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces")
           cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
            else 
             cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
       }
    //Exit the code
    return 0;
}

