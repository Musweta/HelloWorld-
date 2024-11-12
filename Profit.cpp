#include<iostream>
using namespace std;
int main (){
    //Declare the variables to calculate profit
    int buyingPrice, sellingPrice,Profit;
    
    //Prompt for user input
    cout<<"Enter the buying price of the car\n";
    cin>>buyingPrice;
    cout<<"Enter the Selling Price of the car\n";
    cin>>sellingPrice;
    //Calculate the profit
    int profit= sellingPrice-buyingPrice;
    cout<<"The Profit for selling a car is ="<<profit<<endl;
    return 0;
}