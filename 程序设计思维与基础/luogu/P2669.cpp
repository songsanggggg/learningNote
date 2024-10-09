#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    int total = 0;
    int current_day = 1;
    int n = 1;
    while (current_day <= k)
    {
        int days_to_give = min(n, k - current_day + 1);
        total += n * days_to_give;
        current_day += days_to_give;
        n++;
    }
    cout << total << endl;

    return 0;
}