#include <iostream>
using namespace std;

int main()
{
    int length = 0, costTime = 1;
    cin >> length;
    while (length != 1)
    {
        length = length / 2;
        costTime += 1;
    }
    cout << costTime << endl;

    return 0;
}