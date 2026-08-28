#include <iostream>
using namespace std;

class Student {
public:
    Student(string name, int age) {
        cout << name << endl;
        cout << age;
    }
};

int main() {
    Student s1("Shivam", 20);

    return 0;
}