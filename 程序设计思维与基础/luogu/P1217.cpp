#include <iostream>
#include <string>
using namespace std;

bool isPrime(int number);

int main()
{
    unsigned long long palindromes[1000000];
    unsigned long long count = 0, min = 0, max = 0;
    cin >> min >> max;

    for (int i = 1; i <= 9; i += 2)
    {
        if (isPrime(i))
        {
            palindromes[count++] = i;
        }
    }

    for (int i = 1; i <= 9999; i += 2)
    {
        string s = to_string(i);
        string rev = string(s.rbegin(), s.rend());
        unsigned long long palindrome = stoll(rev + s);
        if (palindrome <= max && isPrime(palindrome))
        {
            palindromes[count++] = palindrome;
        }
    }

    for (int i = 1; i <= 9999; i++)
    {
        string s = to_string(i);
        string rev = string(s.rbegin(), s.rend());
        for (char c = '0'; c <= '9'; c++)
        {
            unsigned long long palindrome = stoll(s + c + rev);
            if (palindrome <= max && isPrime(palindrome))
                palindromes[count++] = palindrome;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (palindromes[i] >= min && palindromes[i] <= max)
        {
            cout << palindromes[i] << "\n";
        }
    }

    return 0;
}

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