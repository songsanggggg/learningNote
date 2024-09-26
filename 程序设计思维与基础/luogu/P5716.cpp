#include <iostream>
using namespace std;

int main()
{
    int year = 0, month = 0, day = 0;
    cin >> year >> month;
    switch (month)
    {
    case 1:
        day = 31;
        break;
    case 2:
        day = 28;
        break;
    case 3:
        day = 31;
        break;
    case 4:
        day = 30;
        break;
    case 5:
        day = 31;
        break;
    case 6:
        day = 30;
        break;
    case 7:
        day = 31;
        break;
    case 8:
        day = 31;
        break;
    case 9:
        day = 30;
        break;
    case 10:
        day = 31;
        break;
    case 11:
        day = 30;
        break;
    case 12:
        day = 31;
        break;
    }

    if (((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) && month == 2)
        day = 29;

    cout << day << endl;

    return 0;
}