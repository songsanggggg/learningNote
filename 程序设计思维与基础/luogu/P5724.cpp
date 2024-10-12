#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
  int count = 0;
  cin >> count;

  int *pArr = new int[sizeof(int) * count]();
  for (int i = 0; i < count; i++)
    cin >> pArr[i];
  sort(pArr, pArr + count);
  cout << (pArr[count - 1] - pArr[0]) << endl;

  return 0;
}
