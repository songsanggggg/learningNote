#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num = 1, length = 0;
    cin >> length;
    for(int i = 0; i < length; i++)
    {
        for(int a = (length - i); a > 0; a--)
        {
            cout << setw(2) << setfill('0') << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}