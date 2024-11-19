#include<iostream>
#include<string>
using namespace std;

int main (){
    //declare variables
string name;
int age;
string status; 
double balance;
int period;
 //capture customer details
cout<<"Enter Name\n"; 
getline(cin,name);
//Evaluate the first criteria Age
 if (age<=22) {       
 cout <<"Enter bank balance\n";
  cin>>balance;
 //Evaluate  balance 
 }if (balance>=50000){
    // Check CRB status
cout<<"Enter CRB status 'Good'\'Bad'\n";
cin>>status;
}if (status=="good"){
cout<<"Enter active period\n";
cin>>period;
//Check period active
 }if (period>6){
cout<<"Qualified to apply loan\n";
 }else{
    //Disqualify if the conditions above are not met
    cout<<"Criteria for loan application not met\n";
 }
 return 0;
}


