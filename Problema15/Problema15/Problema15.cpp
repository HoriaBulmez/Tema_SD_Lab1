#include <iostream>

using namespace std;

int main()
{
    int n, factor = 2, counter = 0;
    cin >> n;
    while (n != 1)
    {
        if (n % factor == 0)
        {
            counter++;
            n = n / factor;
        }
        else
        {
            cout << factor << "^" << counter<<"+";
            counter = 0;
            factor++;
        }
    }
    cout << factor << "^" << counter;
}

