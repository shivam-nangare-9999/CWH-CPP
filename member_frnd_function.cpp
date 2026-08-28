#include <iostream>
using namespace std;

// Forward Declaration: Complex class pudhe ahe he compiler la sangnyasathi
class Complex;

class Calculator {
public:
    int add(int a, int b) {
        return (a + b);
    }

    // Function declaration (definition Complex class nantar lihinar)
    int sumRealComplex(Complex, Complex);
};

class Complex {
    int a, b; // Private data

    // 💥 Making a specific member function of Calculator a friend:
    friend int Calculator::sumRealComplex(Complex, Complex);

public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Function definition (ithe Complex cha a access karta yeto)
int Calculator::sumRealComplex(Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

int main() {
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);

    cout << "Sum of real parts: " << res << endl;

    return 0;
}