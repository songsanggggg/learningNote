#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int longestLength = 0;
    int currentLength = 1;

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] == arr[i - 1])
        {
            continue;
        }
        if (arr[i] == arr[i - 1] + 1)
        {
            currentLength++;
        }
        else
        {
            longestLength = max(longestLength, currentLength);
            currentLength = 1;
        }
    }

    longestLength = max(longestLength, currentLength);
    cout << longestLength << endl;

    delete[] arr;
    return 0;
}
