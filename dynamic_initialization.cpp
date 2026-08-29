#include <bits/stdc++.h>
#include <iostream>
using namespace std;


    class Recharge{
        int rupees;
        float dataGB;

        public:
        Recharge(){}

        Recharge(int money){
            rupees = money;
            cout<<"Reacharge is success for "<<rupees<<endl;
        }

        Recharge(float GB){
            dataGB = GB;
            cout<<"Recharge is Done for "<<dataGB<<endl;
        }
    };

int main() {
    
    Recharge r1,r2;   //the reason of creating 2 object is store data seprate seprately you can use single object

    int userMoney;
    float userData;

    cout<<"Enter Recharge Amount: "<<endl;
    cin>>userMoney;

    r1 = Recharge(userMoney);

    cout<<"Enter Data pack in GB: ";
    cin>>userData;

    r2 = Recharge(userData);
    return 0;
}