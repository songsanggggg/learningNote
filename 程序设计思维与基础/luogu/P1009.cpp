#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;

unsigned long long factorial(int num);

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
        for(int i = 0; i < length; i++)
        {
            a[i] = s[length - 1 - i] - '0';
        }
    }

    bigN add(bigN a, bigN b)
    {
        bigN c = {};
        c.length = (a.length >= b.length ? a.length : b.length);
        int sum = 0, carry = 0;
        for(int i = 0; i < (a.length >= b.length ? a.length : b.length); i++)
        {
            sum = a.a[i] + b.a[i] + carry;
            c.a[i] = sum % 10;
            carry = floor(sum / 10);
        }
        return c;
    }

    void write()
    {
        bigN a = *this;
        for(int i = 0; i < a.length; i++)
            cout << a.a[i];
    }
};


int main()
{
    int num = 0;
    cin >> num;
    bigN result, factorialResult;
    for(; num > 0; num--)
    {
        factorialResult.change(to_string(factorial(num)).c_str());
        result = result.add(result, factorialResult);
    }
    result.write();

    return 0;
}

unsigned long long factorial(int num)
{
    unsigned long long result = 1;
    for (int i = 2; i <= num; ++i) {
        result *= i;
    }

    return result;
}
