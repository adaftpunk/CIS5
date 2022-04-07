/*
 * File:   main.cpp
 * Author: Garrett Hileman
 * Created on April 4, 2022, 5:07 PM
 * Purpose: Est. cost
 */
//System Libraries

#include <iostream> //Input/Output Library
#include <iomanip> //format library

using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes
float infFunc(float cuPri,float yrAgPri)
{
    float r;
    r=((cuPri-yrAgPri)/yrAgPri)*100;
    return r;
}
float oneYrFun(float cuPri, float infRate)
{
    float o;
    o=((infRate/100)*cuPri)+cuPri;
    return o;
}
float twoYrFun(float oneYr, float infRate)
{
   float t;
   t=((infRate/100)*oneYr)+oneYr;
   return t;
}
// Program Execution Begins here
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    char choice;
    float infRate,
          oneYr,
          twoYr,
          cuPri,
          yrAgPri;
    
    //Initial Variables
    
    do
    {
    cout<<"Enter current price:"<<endl;
    cin>>cuPri;
    cout<<"Enter year-ago price:"<<endl;
    cin>>yrAgPri;

    infRate=infFunc(cuPri,yrAgPri);
    oneYr=oneYrFun(cuPri, infRate);
    twoYr= twoYrFun(oneYr, infRate);       
    
    cout<<fixed<<setprecision(2)<<showpoint;
    
    cout<<"Inflation rate: "<<infRate<<"%"<<endl;
    cout<<endl;
    cout<<"Price in one year: $"<<oneYr<<endl;
    cout<<"Price in two year: $"<<twoYr<<endl;
    cout<<endl;
    cout<<"Again:"<<endl;
    cin>>choice;
    
        
    if (choice == 'Y' || choice == 'y')
    {
        cout<<endl;
    }
    else 
    {
        cout<<"";
    }
    }
    while (choice == 'Y' || choice == 'y');

    //Map the inputs to the outputs
    
    //Display the inputs and outputs
    
    //Exit the code
    return 0;
}