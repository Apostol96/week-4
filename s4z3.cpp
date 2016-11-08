#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a three digit number ";
    cin >> number;
    int n1 = number%10;
    int n10 = (number/10)%10;
    int n100 = number/100;
    if (n1*n10*n100 >= 100 && n1*n10*n100 <=999)
    {
        cout << "Yes " << n1*n10*n100 - (n1+n10+n100);
    }
    else
    {
        cout << "No";
    }
}
