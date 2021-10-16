#include <iostream>

int main()
{
    int a, n, suma = 0, produs = 1;
    std::cin >> a;
    for (int i = 0; i < a; i++)
    {
        std::cin >> n;
        if (n > 0)
        {
            suma = suma + n;
        }
        if (n % 2 != 0)
        {
            produs = produs * n;
        }
    }
    std::cout << "suma numerelor pozitive este" << " " << suma << std::endl;
    std::cout << "produsul numerelor impare este" << " " << produs;
}

