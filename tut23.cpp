#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << " The Price of item with Id "<<itemId[i]<<" is  "<<itemprice[i]<<endl;
    }
}
void shop ::setPrice(void)
{
    cout << "Enter Id of your item " << endl;
    cin >> itemId[counter];
    cout << "Enter price  of your item " << endl;
    cin >> itemprice[counter];
    counter++;
}
int main()
{
shop dukan;
dukan.initcounter();
dukan.setPrice();
dukan.setPrice();
dukan.setPrice();
dukan.displayPrice();

    return 0;
}