#include <iostream>

using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    for (int i = 0; i < n; i++)
    {
        if (i % p == 0)
        {
            cout << i << " ";
        }
    }
}

