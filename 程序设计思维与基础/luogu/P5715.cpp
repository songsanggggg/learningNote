#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    cin >> a >> b >> c;
    if (a > b)
    {
        d = a;
        a = b;
        b = d;
    }
    if (a > c)
    {
        d = a;
        a = c;
        c = d;
    }
    if (b > c)
    {
        d = b;
        b = c;
        c = d;
    }
    cout << a << " " << b << " " << c << endl;

    return 0;
}