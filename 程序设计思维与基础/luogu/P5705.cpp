#include <iostream>
#include <string>

int main()
{
    using std::cout, std::cin, std::string;

    string a = "";
    int b = 0;

    cin >> a;
    b = a.length();
    for (int i = b - 1; i >= 0; i--)
    {
        cout << a[i];
    }

    return 0;
}