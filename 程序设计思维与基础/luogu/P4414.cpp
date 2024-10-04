#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[3] = {};
    for (size_t i = 0; i < 3; i++)
        cin >> a[i];

    sort(a, a + 3);

    char b[3] = {};
    for (size_t i = 0; i < 3; i++)
        cin >> b[i];

    for (size_t i = 0; i < 3; i++)
    {
        if (b[i] == 'A')
            cout << a[0] << " ";
        else if (b[i] == 'B')
            cout << a[1] << " ";
        else if (b[i] == 'C')
            cout << a[2] << " ";
    }

    return 0;
}