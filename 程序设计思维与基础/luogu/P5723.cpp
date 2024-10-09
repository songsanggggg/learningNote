#include <iostream>
using namespace std;

bool isPrime(int number)
{
    if (number <= 1)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;

    for (int i = 3; i * i <= number; i += 2)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a = 0, numOfPrime = 0, total = 0;
    cin >> a;
    for (int i = 2; i <= a; i++)
    {
        if (isPrime(i))
        {
            total += i;
            if (total > a)
                break;
            cout << i << endl;
            numOfPrime++;
        }
    }
    cout << numOfPrime << endl;

    return 0;
}