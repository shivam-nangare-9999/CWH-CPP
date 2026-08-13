#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int marks[4]={10,20,30,40};

    int mathmarks[4];
    mathmarks[0]=10;
    mathmarks[1]=20;
    mathmarks[2]=30;
    mathmarks[3]=40;

    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;       
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;


    //cout<<marks[0]<<endl;
    //cout<<marks[1]<<endl;
    //cout<<marks[2]<<endl;
    //cout<<marks[3]<<endl;


    for(int i=0; i<4; i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}