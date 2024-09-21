#include <iostream>
using namespace std;

int main()
{
    int nHomeworkScore = 0, nMinTestScore = 0, nFinalTestScore = 0;
    cin >> nHomeworkScore >> nMinTestScore >> nFinalTestScore;
    cout << nHomeworkScore * 0.2 + nMinTestScore * 0.3 + nFinalTestScore * 0.5 << endl;

    return 0;
}