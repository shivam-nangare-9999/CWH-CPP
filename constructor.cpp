#include<iostream>
using namespace std;

class complex{
    int a,b;

    public:
    complex(void){
        a=10;
        b=20;
        cout<<"Constructor Created automatically "<<endl;
    }

    void printData(){
        cout<<"your number is "<<a<<" + "<<b<<" is "<<endl;
    }
};

int main(){

    complex c;

    c.printData();

    return 0;
}