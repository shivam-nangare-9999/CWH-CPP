#include <iostream>
using namespace std;

// ==========================================
// 1. BASE CLASS (Parent)
// ==========================================
class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

// ==========================================
// 2. SINGLE INHERITANCE (Animal -> Dog)
// ==========================================
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks: Bho! Bho!" << endl;
    }
};

// ==========================================
// 3. MULTILEVEL INHERITANCE (Animal -> Dog -> BabyDog)
// ==========================================
class BabyDog : public Dog {
public:
    void weep() {
        cout << "BabyDog weeps: Mew! Mew!" << endl;
    }
};

// ==========================================
// 4. HIERARCHICAL INHERITANCE (Animal -> Cat)
// (Animal चे गुण Dog आणि Cat दोघांकडे जातात)
// ==========================================
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

// ==========================================
// 5. MULTIPLE INHERITANCE (Mom, Dad -> Child)
// ==========================================
class Dad {
public:
    void driving() {
        cout << "Dad taught Driving." << endl;
    }
};

class Mom {
public:
    void cooking() {
        cout << "Mom taught Cooking." << endl;
    }
};

class Child : public Dad, public Mom {
public:
    void coding() {
        cout << "Child knows C++ Coding!" << endl;
    }
};

// ==========================================
// MAIN FUNCTION (सगळे प्रकार रन करून बघूया)
// ==========================================
int main() {
    cout << "--- 1. SINGLE INHERITANCE ---" << endl;
    Dog d;
    d.eat();  // Inherited from Animal
    d.bark(); // Own method

    cout << "\n--- 2. MULTILEVEL INHERITANCE ---" << endl;
    BabyDog bd;
    bd.eat();  // Inherited from Animal
    bd.bark(); // Inherited from Dog
    bd.weep(); // Own method

    cout << "\n--- 3. HIERARCHICAL INHERITANCE ---" << endl;
    Cat c;
    c.eat();   // Inherited from Animal
    c.meow();  // Own method

    cout << "\n--- 4. MULTIPLE INHERITANCE ---" << endl;
    Child ch;
    ch.driving(); // Inherited from Dad
    ch.cooking(); // Inherited from Mom
    ch.coding();  // Own method

    return 0;
}