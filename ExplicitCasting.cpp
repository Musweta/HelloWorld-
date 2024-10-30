#include<iostream>
using namespace std;

int main() {
   double myNum=15.5;// Initialize the double variable
   int myNewNum=int(myNum);// Create a new interger variableand explicitly cast the double to int*
   // This can also be casted as int myNewNum2=(int)myNum1;
   myNewNum=myNum;//Assign double data type to interger
   cout<<"myNewNum is ="<<myNewNum<<endl; //output the new interger variable

   double myNum1=15.5;// Initialize the double variable
   int myNewNum2=(int)myNum1;// Create a new interger variableand explicitly cast the double to int*
   cout<<"myNewNum is ="<<myNewNum2;//output the new interger variable
   return 0;
   }