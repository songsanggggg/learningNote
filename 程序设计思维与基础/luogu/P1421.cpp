#include <iostream>
using namespace std;

int main()
{
    int nYuan = 0, nJiao = 0, nPenNum = 0;
    float fTotalMoney = 0;
    cin >> nYuan >> nJiao;
    fTotalMoney = nYuan + ((float)(nJiao) / 10);
    nPenNum = fTotalMoney / 1.9;
    cout << nPenNum << endl;

    return 0;
}