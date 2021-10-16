#include <iostream>

using namespace std;

int main()
{
    int n, ultimaCifra, reconstructieNumar = 0, factor = 1;
    cin >> n; // 123
    while(n!=0)
    {
        ultimaCifra = n % 10;
        if(ultimaCifra==0)
        {
            ultimaCifra = 1;
        }
        reconstructieNumar = ultimaCifra * factor + reconstructieNumar;
        factor = factor * 10;
        n = n / 10;
    }
    cout << reconstructieNumar;
    return 0;
}

