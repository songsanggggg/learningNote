#include <iostream>
using namespace std;

int main()
{
    int questionNum = 0;
    cin >> questionNum;
    if ((11 + 3 * questionNum) > (5 * questionNum))
        cout << "Local" << endl;
    else
        cout << "Luogu" << endl;

    return 0;
}