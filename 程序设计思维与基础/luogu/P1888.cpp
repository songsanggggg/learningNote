#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[3] = {};
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    sort(a, a + 3);
    int b = a[0], c = a[2];
    while (b != c)
        (b > c) ? b -= c : c -= b;
    cout << (a[0] / b) << "/" << (a[2] / b) << endl;

    return 0;
}