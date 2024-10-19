#include <iostream>
using namespace std;

int main()
{
  int n = 0;
  cin >> n;

  int bestK = 0, bestX = 0;
  bool a = 1;

  for (int k = 0; a; k++)
  {
    for (int x = 200; a; x--)
    {
      if ((int)((n - (double)(1092 * k)) / 364) == (n - (double)(1092 * k)) / 364)
      {
        a = 0;
        bestK = k;
        bestX = x;
      }
    }
  }

  cout << bestX << endl
       << bestK << endl;

  return 0;
}
