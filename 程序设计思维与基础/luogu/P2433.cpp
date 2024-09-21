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
        cout << "I love Luogu!";
    }
    else if (T == 2)
    {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    }
    else if (T == 3)
    {
        cout << (int(14 / 4)) << endl
             << (14 - (14 % 4)) << endl
             << (14 % 4);
    }
    else if (T == 4)
    {
        cout << fixed << setprecision(6) << (double)((double)500 / (double)3) << endl;
    }
    else if (T == 5)
    {
        cout << (int)(260 + 220) / (12 + 20) << endl;
    }
    else if (T == 6)
    {
        cout << sqrt(6 * 6 + 9 * 9) << endl;
    }
    else if (T == 7)
    {
        cout << (100 + 10) << endl
             << (100 + 10 - 20) << endl
             << 0 << endl;
    }
    else if (T == 8)
    {
        cout << (2 * 5 * 3.141592) << endl
             << (5 * 5 * 3.141593) << endl
             << ((4 / 3) * 3.141593 * 5 * 5 * 5) << endl;
    }
    else if (T == 9)
    {
        cout << (((((1 + 1) * 2) + 1) * 2) + 1) * 2 << endl;
    }
    else if (T == 10)
    {
        cout << ceil((126 - 10) / 12) << endl;
    }
    else if (T == 11)
    {
        cout << 100 / (8 - 5) << endl;
    }
    else if (T == 12)
    {
        cout << 13 << endl
             << "R" << endl;
    }
    else if (T == 13)
    {
        cout << (int)pow((3.141593 * 4 * 4 * 4 * (4 / 3)) + (3.141593 * 4 * 4 * 4 * (4 / 3)), (1 / 3)) << endl;
    }
    else if (T == 14)
    {
        cout << 50 << endl;
    }
    return 0;
}