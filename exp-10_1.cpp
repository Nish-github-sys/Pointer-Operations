//Name: Nishka Ranadive
//PRN: 24070123082
//Exp-10

//Program-1
//Pass by Value
#include<iostream>
using namespace std;

void swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;

    return;
}

int main(){

    int a=5, b=10;

    cout<<"Values before swapping are: "<<a<<" & "<<b<<endl;

    swap(a,b);

    cout<<"Swapped Values are: "<<a<<" & "<<b;

    return 0;
}