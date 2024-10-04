#include <iostream>
using namespace std;

int main()
{
    char a[13] = {};
    cin >> a;
    int b = 0;
    b = ((int)(a[0] - '0') * 1 + (int)(a[2] - '0') * 2 + (int)(a[3] - '0') * 3 + (int)(a[4] - '0') * 4 + (int)(a[6] - '0') * 5 + (int)(a[7] - '0') * 6 + (int)(a[8] - '0') * 7 + (int)(a[9] - '0') * 8 + (int)(a[10] - '0') * 9) % 11;
    char b_char = '0' + b;
    if ((int)b_char == (int)(a[12]))
        cout << "Right" << endl;
    else if (b == 10)
    {
        if (a[12] == 'X')
            cout << "Right" << endl;
        else
        {
            a[12] = 'X';
            cout << a << endl;
        }
    }
    else
    {
        a[12] = b_char;
        cout << a << endl;
    }

    return 0;
}