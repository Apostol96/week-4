#include <iostream>

using namespace std;

int main()
{
    int n;
    int fib1 = 0, fib2 = 1;
    int next;
    cout << "Which number from the Fibonacci numbers do you want to see? ";
    cin >> n;
    for (int i=0; i<n-2; i++)
    {
        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
    }
    cout << next;
}
