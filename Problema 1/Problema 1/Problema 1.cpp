// coding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
