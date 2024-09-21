#include <iostream>

int main()
{
    int nStartHour = 0, nStartMin = 0, nEndHour = 0, nEndMin = 0, nUsedMin = 0;
    std::cin >> nStartHour >> nStartMin >> nEndHour >> nEndMin;
    nUsedMin = ((nEndHour * 60) + nEndMin) - ((nStartHour * 60) + nStartMin);
    std::cout << (nUsedMin / 60) << " " << (nUsedMin % 60) << std::endl;

    return 0;
}