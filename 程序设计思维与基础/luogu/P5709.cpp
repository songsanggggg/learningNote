#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int m = 0, t = 0, s = 0;
    cin >> m >> t >> s;
    if (floor((double)s / (double)t) >= m)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (int)(m - ceil((double)s / (double)t));
    }

    return 0;
}