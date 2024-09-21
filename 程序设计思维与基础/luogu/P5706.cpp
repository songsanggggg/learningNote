#include <iostream>
#include <iomanip>

int main()
{
    using std::cout, std::cin, std::endl, std::setprecision, std::fixed;

    float fTotalCap = 0, fSingleCap = 0;
    int nStuNumber = 0;

    cin >> fTotalCap >> nStuNumber;
    cout << fixed << setprecision(3) << (fTotalCap / (float)nStuNumber) << endl;
    cout << (nStuNumber * 2) << endl;

    return 0;
}