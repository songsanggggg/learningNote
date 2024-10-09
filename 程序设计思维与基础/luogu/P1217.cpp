#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number)
{
    if (number <= 1)
        return false;
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int number)
{
    int original = number;
    int reversed = 0;

    while (number > 0)
    {
        reversed = reversed * 10 + (number % 10);
        number /= 10;
    }

    return original == reversed;
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = (floor(a / 2) * 2) + 1; i <= b; i += 2)
    {
        if (isPrime(i) && isPalindrome(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}