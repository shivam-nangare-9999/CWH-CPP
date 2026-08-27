#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();

    int n;
    cout << "Enter number of items: ";
    cin >> n;

    // 'counter' ऐवजी 'n' वापरा
    for(int j = 0; j < n; j++) {
        dukaan.setPrice();
    }
    
    dukaan.displayPrice();
    return 0;
}