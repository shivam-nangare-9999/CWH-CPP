#include<iostream>
using namespace std;

class calculator{
    public:
    int a, b;

    void sum(){
        cout<<"Addition is : "<<a+b<<endl;
    }
};

int main(){
    calculator c1;

    c1.a=10;
    c1.b=20;
    c1.sum();

    return 0;
}