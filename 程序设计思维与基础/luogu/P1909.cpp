#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int requiredNum = 0, penNum = 0, price = 0, minMoney = INT_MAX, i = 0;
    cin >> requiredNum;
    while (i < 3)
    {
        i++;
        cin >> penNum >> price;
        if ((ceil((1.0 * requiredNum) / (1.0 * penNum)) * price) <= minMoney)
            minMoney = (ceil((1.0 * requiredNum) / (1.0 * penNum)) * price);
    }
    cout << minMoney << endl;

    return 0;
}
