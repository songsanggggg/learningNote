#include <iostream>

using namespace std;

int main()
{
    const folat PI = 3.14;
    int h = 0, r = 0, num = 0;
    double v = 0;

    cin >> h >> r;
    v = PI * r * r * h;
    num = ((20 * 10 * 10 * 10) / v) + 1;
    cout << num << endl;

    return 0;
}