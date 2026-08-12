#include<iostream>
using namespace std;
int main(){

    int age;
    cout<<"Enter your age :";
    cin>>age;


    switch(age)
    {
        case 18:
        cout<<"You are 18 years old";
        break;
    
        case 20:
        cout<<"You are 20 years old";
        break;

        case 22:
        cout<<"You are 22 years old";
        break;

        default:
        cout<<"no special cases";
        break;
    }
    return 0;

}   