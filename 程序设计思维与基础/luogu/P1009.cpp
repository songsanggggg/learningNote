#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <stdint.h>
using namespace std;

class bigN
{
private:
    int length;
    int a[1000];

public:
    bigN()
    {
        memset(a, 0, sizeof(a));
        length = 0;
    }

    void change(const char s[])
    {
        length = strlen(s);
        for (int i = 0; i < length; i++)
        {
            a[1000 - i - 1] = s[length - 1 - i] - '0';
        }
    }

    bigN add(bigN b)
    {
        bigN c;
        c.length = max(length, b.length);
        int sum = 0, carry = 0;
        for (int i = 0; i < c.length; i++)
        {
            sum = (i < length ? a[1000 - i - 1] : 0) + (i < b.length ? b.a[1000 - i - 1] : 0) + carry;
            c.a[1000 - i - 1] = sum % 10;
            carry = sum / 10;
        }
        if (carry)
        {
            c.a[1000 - c.length - 1] = carry;
            c.length++;
        }
        return c;
    }

    void write()
    {
        int start = 1000 - length;
        while (start < 1000 && a[start] == 0)
        {
            start++;
        }
        if (start == 1000)
        {
            cout << "0";
        }
        else
        {
            for (int i = start; i < 1000; i++)
                cout << a[i];
        }
    }
};

__uint128_t factorial(int num);

string uint128_to_string(__uint128_t num)
{
    string result;
    do
    {
        result += (num % 10) + '0';
        num /= 10;
    } while (num > 0);
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    int num = 0;
    cin >> num;
    bigN result, factorialResult;
    for (int i = 1; i <= num; i++)
    {
        __uint128_t fact = factorial(i);
        factorialResult.change(uint128_to_string(fact).c_str());
        result = result.add(factorialResult);
    }
    result.write();

    return 0;
}

__uint128_t factorial(int num)
{
    __uint128_t result = 1;
    for (int i = 2; i <= num; ++i)
    {
        result *= i;
    }
    return result;
}