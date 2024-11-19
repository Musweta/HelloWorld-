#include <iostream>
#include <string>
using namespace std;
int main()
{
    int age;
    string childName, intrest;

    cout <<"Please Insert Your Child's Name" <<endl;
    cin >> childName;
    cout <<"Please Insert Your Child's Interest" <<endl;
    cin >> intrest;

    string message= (age >= 4 && age <=10)? "Please Input Your Child's Interest" :  "Age Input is Invalid";
    cin >> intrest;
    
    if (intrest == "soccer") 
    {
        cout <<childName <<" has been assigned to the Soccer Play Group" <<endl;
    } else if (intrest == "art") 
    {
        cout <<childName <<" has been assigned to the Art Play Group" <<endl;
    } else if (intrest == "music")
    {
        cout <<childName <<" has been assigned to the Music Play Group" <<endl;
    } else if (intrest == "athletics")
    {
        cout <<childName <<" has been assigned to the Athletics Play Group" <<endl;
    } else if (intrest == "toys")
    {
        cout <<childName <<" has been assigned to the Toys Play Group" <<endl;
    } else 
    cout <<childName <<" has been assigned to other groups" <<endl;

    return 0; 
    
}