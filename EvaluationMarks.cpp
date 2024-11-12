#include<iostream>
using namespace std;
int main() {
double mark;
cout<<"Please input mark: ";
cin>>mark;
if (mark>=50)
cout<<"Passed\n";
else
cout<<"Failed!\n";
system("pause");
return 0;

    //Tenary operator
    double mark1;
    cout<<"Please input mark";
    cin>>mark1;
    string message=(mark1>=50)?"Passed":"Failed";
    cout<<message;
    return 0;
}