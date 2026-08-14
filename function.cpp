#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int sum(int a, int b){
    int sum = a+b;
    return sum;
}
int main() {

    int num1,num2;
    cout<<"Enter 1st Number :";
    cin>>num1;
    cout<<"Enter 2nd Number :";
    cin>>num2;

    cout<<"Sum is :"<<sum(num1,num2);

    return 0;
}