#include <iostream>
#include <ostream>
using namespace std;

unsigned int fac(int num);

int main()
{
  unsigned int m = 0, n = 0;
  cin >> m >> n;

  if (m < n && m > 0)
    cout << "0" << endl;
  else
  {
    if (m == n && m > 0)
    {
      cout << "1" << endl;
    }
    else
    {
      if (m > n && n > 0)
        cout << fac(m) / (fac(m - n) * fac(n)) << endl;
      else
        cout << "-1" << endl;
    }
  }

  return 0;
}

unsigned int fac(int num)
{
  unsigned int result = num;
  if (num == 1)
    return result;
  result *= fac(num - 1);
}