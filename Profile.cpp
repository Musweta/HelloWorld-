#include<iostream>
#include<string>
using namespace std;

int main(){
    //declare variable
    string firstName, lastName, fullName, favoriteMeal, favouriteMovie;
   
    //prompt user for First Name
    cout<<"Please enter your first name";
    getline(cin,firstName);

    //Prompt user for Last Name
     cout<<"Please enter your last name";
     getline(cin, lastName);

     //Prompt user for full Name
     // Combine first and last names into fullName
     cout<<"Please enter your full name";
     getline(cin, fullName);
    
     //Prompt user for favourite meal
     cout<<"Please enter your favourite meal";
     getline(cin, favoriteMeal);
    
     //Prompt user for favourite movie
    cout<<"Please enter your favourite movie";
     getline(cin, favouriteMovie);

    cout<<"My first name is "<<firstName<<endl;
    cout<<"My Last name is "<<lastName<<endl;
    cout<<"My full name is "<<fullName<<endl;
    cout<<"My favourite meal is "<<favoriteMeal<<endl;
    cout<<"My favourite movie is "<<favouriteMovie<<endl;
    return 0;
}