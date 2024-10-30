#include<iostream>
using namespace std;
int main()
{
//Variable declaration
    int area,length,width;    //variable initialization
    length=8;
    width=5; 
    //computing the area
    area=length*width;
    //output the area
    cout<<"Area of the rectangle is: "<<area;
    return 0;
  
    //OR this can be programmed as 
  // prompt user to enter the values,
  float  length2,width2, area2; // variable declaration
     cout<< "Enter the length"; // Prompt user to key in length
     cin>> length2;
    cout<< "Enter Width"; //Prompt user to key in width
    cin>> width2;
     // Program logic
     area2=length2*width2;
     cout<< "Area of a rectangle = "<< area2<<endl;
     return 0;

}