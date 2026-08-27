#include <iostream>
using namespace std;

class Calculator {
private:
    // Private member function
    void showHeader() {
        cout << "--- Calculation Process Started ---" << endl;
    }

public:
    // Public member function
    void calculateSum(int a, int b) {
        // Nesting: Calling member function inside another member function directly
        showHeader(); 

        cout << "Sum: " << (a + b) << endl;
    }
};

int main() {
    Calculator calc;

    // Direct call from main()
    calc.calculateSum(10, 20); 

    return 0;
}