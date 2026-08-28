#include <iostream>
using namespace std;

class shop {
  int itemId[100];
  int itemPrice[100];
  int counter;

 public:
  void initCounter(void) { counter = 0; }
  void setPrice();
  void displayPrice();
};

void shop ::setPrice(void) {
  cout << "Enter ID of Your Item" << counter + 1 << endl;
  cin >> itemId[counter];
  cout << "Enter Price Of Your Item" << endl;
  cin >> itemPrice[counter];
  counter++;
}

void shop ::displayPrice(void) {
  for (int i = 0; i < counter; i++) {
    cout << "The price of item with id " << itemId[i] << " is " << itemPrice[i]
         << endl;
  }
}

int main() {
  shop dukaan;
  dukaan.initCounter();

  int n;
  cout << "Enter Number of items: ";
  cin >> n;

  for (int j = 0; j < n; j++) {
    dukaan.setPrice();
  }

  dukaan.displayPrice();
  return 0;
}