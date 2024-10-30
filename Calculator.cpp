#include<iostream>
using namespace std;

int main(){
    //Declare the variables to use
    float value1, value2, addition, multiplication, subtraction,division;
    // Create the programming logic
    cout<< "Enter value 1"; // Prompt user to key in value 1
     cin>> value1;
     cout<< "Enter value 2"; // Prompt user to key in value 2
     cin>> value2;
     addition=value1+value2;
     cout<< "Addition of value 1 and value 2 is :"<<addition<< endl;
     cout<< "Enter value 1"; // Prompt user to key in value 1
     cin>> value1;
     cout<< "Enter value 2"; // Prompt user to key in value 2
     cin>> value2;
     subtraction=value1-value2;
     cout<< "Subtraction of value 1 and value 2 is :"<<subtraction<< endl;
     cout<< "Enter value 1"; // Prompt user to key in value 1
     cin>> value1;
     cout<< "Enter value 2"; // Prompt user to key in value 2
     cin>> value2;
     multiplication=value1*value2;
     cout<< "Multiplication of value 1 and value 2 is :"<<multiplication<< endl;
     cout<< "Enter value 1"; // Prompt user to key in value 1
     cin>> value1;
     cout<< "Enter value 2"; // Prompt user to key in value 2
     cin>> value2;
     division=value1/value2;
     cout<< "Division of value 1 and value 2 is :"<<division<< endl;
     return 0;
}