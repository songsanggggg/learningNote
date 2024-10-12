#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double n = 0., Fn = 0.;
    cin >> n;
    Fn = (pow(((1 + pow(5, 0.5)) / 2), n) - pow(((1 - pow(5, 0.5)) / 2), n)) / pow(5, 0.5);
    cout << fixed << setprecision(2) << Fn << endl;

    return 0;
}