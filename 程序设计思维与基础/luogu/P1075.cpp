#include <iostream>
#include <stdint.h>
#include <cmath>
using namespace std;

int main()
{
    uint32_t a = 0, k = 2;
    cin >> a;
    for (; k <= sqrt(a); k++)
    {
        if (a % k == 0)
        {
            k = a / k;
            break;
        }
    }
    cout << k << endl;

    return 0;
}