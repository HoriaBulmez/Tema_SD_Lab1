#include <iostream>

using namespace std;

int main()
{
    int n, invers = 0, ultimaCifra, copieN;
    cin >> n;
    copieN = n;
    while (n != 0)
    {
        ultimaCifra = n % 10;
        n = n / 10;
        invers = invers * 10 + ultimaCifra;
    }
    if (copieN == invers)
    {
        cout << copieN << " este palindrom";
    }
    else
    {

        cout << copieN << " nu este palindrom";
    }
    return 0;
}

