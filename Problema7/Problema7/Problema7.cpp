#include <iostream>

using namespace std;

int main()
{
    int nr, cifra, counter = 0;
    cin >> nr;
    while (nr != 0)
    {
        cifra = nr % 10;
        if (cifra == 3)
        {
            counter++;
        }
        nr = nr / 10;
    }
    cout << "numarul are " << counter << " cifre egale cu 3";
    return 0;
}
