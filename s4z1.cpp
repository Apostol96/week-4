#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number between 5 and 20 ";
    cin >> number;
    if (number<5 || number>20)
        cout << "Enter a correct number ";
    else
    {
        switch (number%2)
        {
            case 0: cout << "Even "; break;
            case 1: cout << "Odd "; break;
        }
    }
}
