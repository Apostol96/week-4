#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int n, value;
    int bigMin = std::numeric_limits<int>::min();
    cout << "How many numbers will you enter ";
    cin >> n;
    if(n>0)
    {
        for (int i=0; i<n; i++)
        {
        cin >> value;
        if ( value > bigMin && value < 0)
            bigMin=value;
        }
    }
    if (bigMin == std::numeric_limits<int>::min())
        cout << "No negative numbers were entered";
    else
        cout << bigMin;
}
