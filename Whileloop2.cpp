#include<iostream>
using namespace std;
int main(){
    int num=20;
    int sum;

    while (num<=25){
        sum=sum+num;
        num++;
        cout <<num;
        cout<<",";
        }
        cout<<sum<<endl;
        return 0;
}