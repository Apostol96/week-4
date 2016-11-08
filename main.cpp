#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter triangle dimensions ";
    cin >> a >> b >> c;
    if (a+b>c && b+c>a && c+a>b)
    {
        if (a==b && b==c)
            cout << "Exists, equilateral ";
        else if ((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
            cout << "Exists, isosceles ";
        else
            cout << "Exists, scalene ";
    }
    else
        cout << "Does not exist";
}
