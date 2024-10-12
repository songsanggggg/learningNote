#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int a = 0;
    cin >> a;

    string s = to_string(abs(a));
    string rev = to_string(stoll(string(s.rbegin(), s.rend())));
    if (a < 0)
        rev = "-" + rev;
    cout << rev << endl;

    return 0;
}