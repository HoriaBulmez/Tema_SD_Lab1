#include <iostream>

int main()
{
    int a, n, numereCuExactTreiCifreNenule = 0, cifreNenule = 0, ultimaCifra;
    std::cin >> a;
    for (int i = 0; i < a; i++)
    {
        std::cin >> n;
        while (n != 0)
        {
            ultimaCifra = n % 10;
            if (ultimaCifra != 0)
            {
                cifreNenule++;
            }
            n = n / 10;
        }
        if (cifreNenule == 3)
        {
            numereCuExactTreiCifreNenule++;
        }
        cifreNenule = 0;
    }
    std::cout << numereCuExactTreiCifreNenule << " " << "numere au exact 3 cifre nenule";
}
