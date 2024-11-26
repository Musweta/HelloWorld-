#include<iostream>
using namespace std;
void myfunction()
{
    //Function code block
    //Local Variable declarions and ininitializations

    int localVar=35;
    const int age =25;
    cout<<"My Function LocalVar ="<<localVar<<endl;
}
int main()
{
    //Function code block
    //Local Variable declarions and ininitializations
    int localVar=30;
    const int age=25; // Constant local variable
    cout<< "MainlocalVar="<<localVar<<endl;
    myfunction();
    return 0;

}