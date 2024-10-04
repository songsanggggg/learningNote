#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 0;
    float totalCost = 0.f;
    cin >> a;
    if (a <= 150)
        totalCost = a * 0.4463f;
    if (a >= 151 && a <= 400)
        totalCost = 150 * 0.4463f + (a - 150) * 0.4663f;
    if (a >= 401)
        totalCost = totalCost = 150 * 0.4463f + (400 - 150) * 0.4663f + (a - 400) * 0.5663f;
    cout << fixed << setprecision(1) << totalCost << endl;

    return 0;
}