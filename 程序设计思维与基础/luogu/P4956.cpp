#include <stdio.h>
#include <stdbool.h>

int main()
{
  int x = 0, k = 0, n = 0;
  scanf("%d", &n);
  bool flag = 0;
  for (x = 100; x > 0; x--)
  {
    for (k = 1; k < 100000; k++)
    {
      if (364 * x + 1092 * k == n)
      {
        printf("%d\n%d", x, k);
        flag = 1;
        break;
      }
      if (flag == 1)
        break;
    }
  }

  return 0;
}