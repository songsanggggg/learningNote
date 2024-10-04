#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a = 0, h = 0, m = 0, s = 0;
    cin >> a;
    if(a > = (24 * 60 * 60))
            a -= (24 * 60 * 60);
    h = floor(a / 3600);
    m = floor((a - (h * 3600)) / 60);
    s = (a - (h * 3600) - (m * 60));
    cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s << endl;
    return 0;
}
