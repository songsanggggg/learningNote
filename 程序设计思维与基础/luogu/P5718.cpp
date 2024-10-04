#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i = 0;
    cin >> i;
    int a[i] = {};
    for (int b = 0; b < i; b++)
        cin >> a[b];
    sort(a, a + i);
    cout << a[0] << endl;

    return 0;
}