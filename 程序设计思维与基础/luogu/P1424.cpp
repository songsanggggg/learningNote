#include <iostream>
using namespace std;

int main()
{
    int day = 0, costDay = 0, totalMileage = 0;
    cin >> day >> costDay;
    for (int i = day; costDay != 0; costDay--)
    {
        if (day == 7)
        {
            day = 1;
            continue;
        }
        if (day != 6 && day != 7)
            totalMileage += 250;
        day++;
    }
    cout << totalMileage << endl;

    return 0;
}