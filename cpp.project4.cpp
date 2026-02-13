#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    cout << "You entered: " << marks << endl;
    
    if (marks >= 90)
        cout << "you got grade a" << endl;
    else if (marks >= 80)
        cout << "you got grade b" << endl;
    else if (marks >= 70)
        cout << "you got grade c" << endl;
    else if (marks >= 60)
        cout << "you got grade d" << endl;
    else
        cout << "you got grade f" << endl;
    
    cin.get();
    return 0;
}
