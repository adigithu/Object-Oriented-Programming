#include<iostream>
using namespace std;
const int m = 50;
class ITEMS {
    int itemCode[m];
    float itemPrice[m];
    int count;
public:
    void CNT(void) {
        count = 0;
    }
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
};
void ITEMS::getitem(void) {
    if (count >= m) {
        cout << "Item limit reached!" << endl;
        return;
    }
    cout << "Enter item code: ";
    cin >> itemCode[count];
    cout << "Enter item cost: ";
    cin >> itemPrice[count];
    count++;
}
void ITEMS::displaySum(void) {
    float sum = 0;
    for (int i = 0; i < count; i++) {
        sum += itemPrice[i];
    }
    cout << "Total value: " << sum << endl;
}
void ITEMS::remove(void) {
    int a;
    cout << "Enter item code to delete: ";
    cin >> a;
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (itemCode[i] == a) {
            itemPrice[i] = 0;
            itemCode[i] = -1;
            found = true;
        }
    }
    if (!found) {
        cout << "Item not found!" << endl;
    }
}
void ITEMS::displayItems(void) {
    cout << "Code\tPrice" << endl;
    for (int i = 0; i < count; i++) {
        if (itemCode[i] != -1) {
            cout << itemCode[i] << "\t" << itemPrice[i] << endl;
        }
    }
}
int main() {
    ITEMS order;
    order.CNT();
    int x;
    do {
        cout << "\nYou can do the following. Enter appropriate number:\n";
        cout << "1: Add an item\n";
        cout << "2: Display total value\n";
        cout << "3: Delete an item\n";
        cout << "4: Display all items\n";
        cout << "5: Quit\n";
        cout << "What is your option? ";
        cin >> x;
        switch (x) {
            case 1: order.getitem(); break;
            case 2: order.displaySum(); break;
            case 3: order.remove(); break;
            case 4: order.displayItems(); break;
            case 5: cout << "Exiting..." << endl; break;
            default: cout << "Error in input; try again\n";
        }
    } while (x != 5);
    return 0;
}