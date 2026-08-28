#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
    void setData(int v1, int v2){
        a= v1;
        b= v2;    
    }
    void setDataBySum(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};