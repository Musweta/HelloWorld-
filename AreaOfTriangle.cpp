#include<iostream>
using namespace std;
int main()
{
    //Declare the varibles
    float base= 10;
    float height=7;
    float hypotenuse=12;
 // Declare the area of a Triangle
    float area;
    area=0.5*base*height;
    //Declare the formula to calculate the perimeter of a right angled triangle
    float perimeter;
    perimeter=base+height+hypotenuse;
    cout<<"Area of a Right angled triangle is = "<<area<<endl;
    cout<<"Perimeter of a Right angled triangle is = "<<perimeter<<endl;
     return 0;


}