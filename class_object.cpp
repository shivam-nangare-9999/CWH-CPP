#include<iostream>
using namespace std;

class calculator{
    private:
    int a, b;

    public:
    void setData(int x, int y){
        a=x;
        b=y;
    }

    void sum(){
        cout<<"Sum Is: "<<a+b<<endl;
    }
};

int main(){
    calculator c1;
     c1.setData(10,20);
     c1.sum();
     return 0;
}