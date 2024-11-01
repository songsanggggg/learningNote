#include <iostream>
using namespace std;

int main()
{
    int count = 0, num = 0;
    cin >> count >> num;
    int *p = new int[count];
    for (int i = 0; i < count; i++)
        cin >> p[i];
    bool status = 1;
    for (int i = count - num; i < count; i++)
        cout << p[i] << " ";
    for (int i = 0; i < count - num; i++)
        cout << p[i] << " ";
    delete[] p;

    return 0;
}
