#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cin >> num;
    bool q1 = false, q2 = false;
    q1 = (num % 2 == 0);
    q2 = (num > 4 && num <= 12);
    if (q1 && q2)
        cout << "1 ";
    else
        cout << "0 ";
    if (q1 || q1)
        cout << "1 ";
    else
        cout << "0 ";
    if (q1 ^ q2)
        cout << "1 ";
    else
        cout << "0 ";
    if (!q1 && !q2)
        cout << "1";
    else
        cout << "0";

    return 0;
}