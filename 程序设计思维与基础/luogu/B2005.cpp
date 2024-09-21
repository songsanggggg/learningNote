#include <iostream>
#include <string>

int main()
{
    using std::cout, std::cin, std::endl, std::string;

    string a;

    cin >> a;
    cout << "  " + a + "\n " + a + a + a + "\n" + a + a + a + a + a;

    return 0;
}