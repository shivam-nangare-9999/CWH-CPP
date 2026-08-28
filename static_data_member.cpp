#include <iostream>
using namespace std;

class Employee {
  int id;
  static int count; //count default value is 0

 public:
  void setData(void) {
    cout << "Enter the id: ";
    cin >> id;
    count++;
  }

  void getData(void) {
    // Spaces added for clean display
    cout << "The id of this employee is: " << id
         << " and this is employee number: " << count << endl;
  }
};

// Count variable initialized here outside class
int Employee ::count;  //if you want to change count value then you can chane here not directly in private class

int main() {
  Employee shivam, harry;

  harry.setData();
  harry.getData();

  shivam.setData();
  shivam.getData();

  return 0;
}