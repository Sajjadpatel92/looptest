#include<iostream>
using namespace std;

int main(){
    int num,first,last,sum;
    cout<<"Enter any number: ";
    cin>>num;
    last=num%10;
    while(num>=10){
        num=num/10;
    }
    first=num;
    sum=first+last;
    cout<<"sum of first and last digit total is: "<<sum;
 
}