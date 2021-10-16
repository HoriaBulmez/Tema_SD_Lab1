#include <iostream>

int main()
{
    int a, b, produs = 0;
    std::cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        produs = b + produs;
    }
    std::cout << produs;
    return 0;
}


