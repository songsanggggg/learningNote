#include <iostream>
using namespace std;

int main()
{
    int k = 0, total = 0;
    cin >> k;
    for (int i = 1; i <= k; i++)
        total += i;
    cout << total << endl;

    return 0;
}