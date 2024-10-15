#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int count = 0;
    cin >> count;

    int *arr = new int[sizeof(int) * count]();
    for (int i = 0; i < count; i++)
        cin >> arr[i];
    sort(arr, arr + count);

    int pastNum = arr[0], temCount = 0, maxCount = 0;
    for (int i = 1; i <= count - 1; i++)
    {
        if (arr[i] == (pastNum + 1))
            temCount++;
        if (temCount >= maxCount)
            maxCount = temCount;
    }
    cout << (maxCount + 1) << endl;

    return 0;
}