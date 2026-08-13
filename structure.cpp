#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct employee{
    int id;
    string name;
    int salary;
};

int main() 
{
    
    struct employee shivam;
    shivam.id=101;
    shivam.name="Shivam";
    shivam.salary=200000;

    cout<<shivam.id<<endl;
    cout<<shivam.name<<endl;
    cout<<shivam.salary<<endl;
    
    return 0;
    }
    
   /* int main(){
        enum Meal{ breakfast, lunch, dinner};
        Meal m1 = lunch;
        cout<<m1;
        return 0;
    }*/