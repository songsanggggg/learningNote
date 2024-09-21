#include <iostream>

int main()
{
    using std::cin, std::cout;

    char a = 0;

    cin >> a;
    cout << (char)(a - (97 - 65)) << "\n";

    return 0;
}