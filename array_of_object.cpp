#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Employee {
  int id;
  int salary;

 public:
  void setData(void) {
    salary = 122;
    cout << "Enter employee id: ";
    cin >> id;
  }

  void getData(void) { cout << "The employee id is: " << id<<endl; }
};

int main() {
  Employee fb[4];

  for (int i = 0; i < 4; i++) {
    fb[i].setData();
    fb[i].getData();
  }
  return 0;
}