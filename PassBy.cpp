#include <iostream>
using namespace std;

// Call by Value
void swapByValue(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "\nInside Call by Value:";
    cout << "\na = " << a;
    cout << "\nb = " << b;
}

// Call by Reference
void swapByReference(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "\nInside Call by Reference:";
    cout << "\na = " << a;
    cout << "\nb = " << b;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nBefore Call by Value:";
    cout << "\na = " << a;
    cout << "\nb = " << b;

    swapByValue(a, b);

    cout << "\n\nAfter Call by Value:";
    cout << "\na = " << a;
    cout << "\nb = " << b;

    cout << "\n\n-------------------------";

    cout << "\n\nBefore Call by Reference:";
    cout << "\na = " << a;
    cout << "\nb = " << b;

    swapByReference(a, b);

    cout << "\n\nAfter Call by Reference:";
    cout << "\na = " << a;
    cout << "\nb = " << b;

    return 0;
}