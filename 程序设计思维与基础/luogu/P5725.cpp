#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned short a = 0, num = 1;
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        for (int c = 1; c <= a; c++)
        {
            cout << setw(2) << setfill('0') << num;
            num++;
        }
        cout << endl;
    }

    cout << endl;
    num = 1;

    for (int i = 1; i <= a; i++)
    {
        for (int b = a - i; b > 0; b--)
            cout << "  ";
        for (int c = i; c > 0; c--)
        {
            cout << setw(2) << setfill('0') << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}