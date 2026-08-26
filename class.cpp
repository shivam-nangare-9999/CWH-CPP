#include <iostream>
using namespace std;

class Employee {
private:
    int a, b, c; // Private: Fakt class chya aat use honar

public:
    int d, e;    // Public: Baher pan direct access karta yeil

    // 1. setData: Values set karnyasathi
    void setData(int a1, int b1, int c1) {
        a = a1;
        b = b1;
        c = c1;
    }

    // 2. getData: Values print karnyasathi (semicolon kadhla)
    void getData() {
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
        cout << "value of c is " << c << endl;
        cout << "value of d is " << d << endl;
        cout << "value of e is " << e << endl;
    }
};

int main() {
    Employee swapnil;

    // Public variables direct set kele
    swapnil.d = 40;
    swapnil.e = 50;

    // Private variables setData function through set kele
    swapnil.setData(10, 20, 30);

    // Sagle print karnyasathi
    swapnil.getData();

    return 0;
}