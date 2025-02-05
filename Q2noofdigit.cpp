//find the total numbers of digit

#include<iostream>
using namespace std;

int main(){
    int i,count=0;
    cout<<"Enter any number: ";
    cin>>i;
    //while(i>0){//
    for(;i>0;){
        i=i/10;
        count++;
    }
    cout<<"Total digits number is: "<<count;
}
 