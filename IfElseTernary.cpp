#include<iostream>
using namespace std;
int main()  {
    //Declare the variable to be used
    int age;
    cout<<"Please enter age\n";
    cin>>age;
    //Using the conditional if to evaluate the integer
    if(age>=4){
    cout<<"Admitted!Proceed to registration\n";}
    else{
        cout<<"Declined! Minimum admission  age is not reached\n";
    }
       // USING TERNARY OPERATOR
string message=(age>=4)?" Admit to school.":"Decline! Minimum age not reached";
       cout <<message<<endl;

    return 0;

}
