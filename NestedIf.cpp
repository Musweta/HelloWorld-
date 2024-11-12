/*Suppose, in our pre-school admissions app, we need to satisfy the following conditions when admitting children
//Check the child’s age is between 4 and 10 years
//If the above criteria is met, proceed to check the interest of the child
//If the interest of the child is “soccer”, assign to the Soccer Play group,
//If the interest of the child is “art”, assign to the Art Play Group.
//If the interest is neither soccer nor art, assign to other groups
//If the first condition (a) is not met, display an error massage stating that the age input is valid*/

#include<iostream>
#include<string>
using namespace std;
int main()  {
    //Declare the variable to be used
    string childName, intrest;
    int age;
    //Promt uswer for child name
    cout<<"Please enter the child full's name:\n"; 
    getline(cin, childName) ;  
    cout<<"Please enter age\n";
    cin>>age;
    //Using the conditional if to evaluate the integer
    if (age>=4 && age<=10)     // Begins the primary if
   { cout<<"Please enter child intrest ";}
    cin>>intrest;
    if (intrest=="socccer")   //Begins the nested if
   {
    cout<<" Admit to play soccer play group"<<endl;
    }
    if (intrest=="art")  // Second nested if
    {
        cout<<childName<<"\tHas been admited and assigned to the Art Play Group"<<endl;
    }
    else
    {
    cout<< "admission Unsuccessful" <<childName<<"'s age is invalid "<<endl;
    }
    return 0;

}
