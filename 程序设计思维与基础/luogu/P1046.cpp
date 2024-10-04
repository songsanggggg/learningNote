#include <iostream>
using namespace std;

int main()
{
    int a[10] = {};
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    int height = 0;
    cin >> height;
    int catchedApple = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] <= (height + 30))
            catchedApple++;
    }
    cout << catchedApple << endl;

    return 0;
}