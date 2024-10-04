#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    while (d < 7)
    {
        d++;
        cin >> a >> b;
        if ((a + b) > 8)
        {
            if ((a + b) > c)
            {
                c = (a + b);
                e = d;
            }
        }
    }
    cout << e << endl;
    return 0;
}