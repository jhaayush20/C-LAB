#include <iostream>
#include <string>
using namespace std;

// Function to check number palindrome
void numberPalindrome()
{
    int n, original, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        cout << "Number is Palindrome\n";
    else
        cout << "Number is not Palindrome\n";
}

// Function to check string palindrome
void stringPalindrome()
{
    string str;
    int i, j;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    i = 0;
    j = str.length() - 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            palindrome = false;
            break;
        }

        i++;
        j--;
    }

    if (palindrome)
        cout << "String is Palindrome\n";
    else
        cout << "String is not Palindrome\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n----- MENU -----\n";
        cout << "1. Number Palindrome\n";
        cout << "2. String Palindrome\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                numberPalindrome();
                break;

            case 2:
                stringPalindrome();
                break;

            case 3:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}