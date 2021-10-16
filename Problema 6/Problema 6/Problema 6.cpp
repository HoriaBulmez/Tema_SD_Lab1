#include <iostream>

using namespace std;

int main()
{
    int counter = 0, nr = 0;
    while(counter<100)
    {
        if(nr%13==0)
        {
            cout << nr << " ";
            counter++;
        }
        nr++;
    }
}