//  print all the alphabets from a to z by skipping 3 alphabet. 

#include <iostream>
using namespace std;

int main(){
    char alphabet='a';
    do{
        cout<<alphabet<<" ";
       alphabet=alphabet+4;
    }while(alphabet<='z');

}