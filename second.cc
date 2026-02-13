#include <iostream>
using namespace std;
int main ()
{
    cout<<"this program calculates the area of a rectangle\n";
    int width;
    cout<<"please enter rectangle width: \n";
cin>>width;

    int length;
    cout<<"please enter rectangle length: \n";
    cin>>length;

    int area = width * length;
    cout<<"The area of the rectangle is: " << area << "\n";

    return 0;
}