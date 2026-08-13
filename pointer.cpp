#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int a=3;
    int* b=&a;

    //&--> Addredss of operator
    cout<<"Address Of A is:"<<&a<<endl;
    cout<<"Address Of B is:"<<b<<endl;
    
    //*--> Dereference (value) of operator
    cout<<"Value At Address B is:"<<*b<<endl;

    //pointer to pointer
    int** c=&b;
    cout<<"Address Of b is:"<<&c<<endl;
    cout<<"Value At Address C is:"<<c<<endl;

    return 0;
}