#include <iostream>
using namespace std;

int main() {
    int i;

    cout << "Enter an integer value: ";
    cin >> i;

    switch (i) {
        case 10:
            cout << "The value is 10." << endl;
            break;
        case 20:
            cout << "The value is 20." << endl;
            break;
        case 30:
            cout << "The value is 30." << endl;
            break;
        default:
            cout << "The value is not 10, 20, or 30." << endl;
            break;
    }

    return 0;
}