#include <iostream>
using namespace std;

int count = 0;

class Test{
    public:

    Test(){
        count++;
        cout<<"Constructor called for object"<<count<<endl;
    }

    ~Test(){
        cout<<"Destructor called for object"<<count<<endl;
        count--;
    }
};


int main() {
    
    cout<<"Entering in main function"<<endl;
    cout<<"creating object n1"<<endl;
    Test n1;
    {
        cout<<"Entering inside block"<<endl;
        cout<<"creating two more object n2,n3"<<endl;
        Test n2,n3;
        cout<<"Exiting Block"<<endl;
    }

    cout<<"Back in main function "<<endl;
    return 0;
}