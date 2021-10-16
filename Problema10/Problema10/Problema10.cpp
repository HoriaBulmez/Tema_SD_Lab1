#include <iostream>

using namespace std;

int main()
{
    int x, y, rezultat;
    cin >> x >> y;
    rezultat = x;
    for (int i = 0; i < y - 1; i++)
    {
        rezultat = rezultat * x;
    }
    cout << rezultat;
    return 0;
}
