#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number to find it's factorial ";
    cin >> n;
    int fact = 1;
    if (n<0)
        cout << "Enter a correct number ";
    else
    {
        while (n>0)
        {
            fact *= n;
            n--;
        }
        cout << fact;
    }
}
