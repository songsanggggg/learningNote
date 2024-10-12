#include <iostream>
using namespace std;

int main()
{
  double S = 0., V = 2., L = 0.;
  unsigned short times = 0;
  cin >> S;

  while (L <= S)
  {
    L += V;
    V *= 0.98;
    times++;
  }
  cout << times << endl;

  return 0;
}
