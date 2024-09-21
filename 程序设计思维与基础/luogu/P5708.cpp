#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1) << sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c)) << endl;

    return 0;
}