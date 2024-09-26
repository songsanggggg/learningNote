#include <iostream>
using namespace std;

int main()
{
    double m = 0, h = 0, bmi = 0;
    cin >> m >> h;
    bmi = (m / (h * h));
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    if (bmi >= 18.5 && bmi < 24)
        cout << "Normal" << endl;
    if (bmi >= 24)
        cout << bmi << endl
             << "Overweight" << endl;

    return 0;
}