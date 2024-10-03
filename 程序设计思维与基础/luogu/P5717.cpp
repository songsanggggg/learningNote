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
    if (a + b > c && a + c > b && b + c > a)
    {
        if ((b * b) + (a * a) == (c * c))
            cout << "Right triangle" << endl;
        if ((b * b) + (a * a) < (c * c))
            cout << "Obtuse triangle" << endl;
        if ((b * b) + (a * a) > (c * c))
            cout << "Acute triangle" << endl;
        if (a == b || b == c || c == a)
            cout << "Isosceles triangle" << endl;
        if (a == b && b == c)
            cout << "Equilateral triangle" << endl;
    }
    else
        cout << "Not triangle" << endl;

    return 0;
}