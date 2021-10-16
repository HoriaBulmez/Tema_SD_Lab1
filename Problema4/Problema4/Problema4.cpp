#include <iostream>

using namespace std;

int main()
{
    int a, n, minim = INT_MAX;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> n;
        if (n < minim)
        {
            minim = n;
        }
    }
    cout << "valoarea minima este " << minim;
}
