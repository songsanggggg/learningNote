#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int count = 0, total = 0;
    cin >> count;
    int *arr = new int[count];
    for (size_t i = 0; i < count; i++)
        cin >> arr[i];

    sort(arr, arr + count);
    for (int i = 1; i < count - 1; i++)
        total += arr[i];
    cout << fixed << setprecision(2) << ((double)total / (double)(count - 2))
         << endl;

    return 0;
}
