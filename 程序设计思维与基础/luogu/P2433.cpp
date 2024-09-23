#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    int T;
    cin >> T;
    if (T == 1)
    {
        cout << "I love Luogu!" << endl;
    }
    else if (T == 2)
    {
        cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
    }
    else if (T == 3)
    {
        int a = 14 / 4;
        cout << a << endl;
        cout << a * 4 << endl;
        cout << 14 - a * 4 << endl;
    }
    else if (T == 4)
    {
        cout << fixed << setprecision(3) << (double)((double)500 / (double)3) << endl;
    }
    else if (T == 5)
    {
        cout << (int)(260 + 220) / (12 + 20) << endl;
    }
    else if (T == 6)
    {
        cout << sqrt((double)6 * (double)6 + (double)9 * (double)9) << endl;
    }
    else if (T == 7)
    {
        cout << (100 + 10) << endl
             << (100 + 10 - 20) << endl
             << 0 << endl;
    }
    else if (T == 8)
    {
        cout << 3.141593 * 10 << endl
             << 3.141593 * 25 << endl
             << 4.0 / 3 * 3.141593 * 125 << endl;
    }
    else if (T == 9)
    {
        cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2 << endl;
    }
    else if (T == 10)
    {
        cout << (int)ceil((126 - 10) / 12) << endl;
    }
    else if (T == 11)
    {
        cout << (double)100 / (8 - 5) << endl;
    }
    else if (T == 12)
    {
        cout << 'M' - 'A' + 1 << endl
             << "R" << endl;
    }
    else if (T == 13) //
    {
        cout << (int)(pow(4 / 3 * 3.141593 * (4 * 4 * 4 + 10 * 10 * 10), 1.0 * 1 / 3));
    }
    else if (T == 14)
    {
        cout << 50 << endl;
    }
    return 0;
}