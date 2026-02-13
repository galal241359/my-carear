#include <iostream>
using namespace std;
int main ()
{
    float marks ;
    cout << "Enter marks: ";
    cin >> marks;
    
    if (marks >=85.5)
        cout <<"you got grade a"<<endl;
    else if (marks >=75.5)
        cout <<"you got grade b "<<endl;
    else if (marks >=65.5)
        cout <<"you got grade c"<<endl;
    else if (marks >=55.5)
        cout <<"you got grade d"<<endl;
    else
        cout <<"you got grade f"<<endl;
    
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.ignore();
    return 0;
}
