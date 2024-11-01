#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cin >> num;
    int result[20];
    int arr[2000];

    int a = 0, i = 0;
    while (1)
    {
        cin >> a;
        if (a == -1)
            break;
        arr[i] = a;
        i++;
    }

    int count = 0;
    while (1)
    {
        if (a == -1)
            break;
        if (num == 0)
        {
            cout << count << endl;
            count = 0;
        }
        if (arr[i] % num == 0)
            count++;
        i++;
    }

    return 0;
}