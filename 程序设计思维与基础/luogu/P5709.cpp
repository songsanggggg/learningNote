#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    u_int8_t m = 0, t = 0, s = 0;
    cin >> m >> t >> s;
    if (m * t > s)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << m - ceil((0.1 * s) / (0.1 * t)) << endl;
    }

    return 0;
}