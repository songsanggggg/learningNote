#include <iostream>
using namespace std;

int main()
{
    unsigned int n = 0, x = 0;
    cin >> n >> x;

    char targetDigit = x + '0';
    int num = 0;

    for (size_t i = 1; i <= n; i++)
    {
        string strI = to_string(i);

        for (char digit : strI)
        {
            if (digit == targetDigit)
            {
                num++;
            }
        }
    }

    cout << num << endl;
    return 0;
}