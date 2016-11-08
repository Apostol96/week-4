#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "How many members do you want to see? ";
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cout << i*i + 3*i << " ";
    }
}
