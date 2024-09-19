#include <iostream>

int foo1(int);
int foo2(int *);

int main()
{
    int num1 = 0;
    int num2 = 0;

    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    num2 = foo1(num1);
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    int *p = &num1;

    num2 = foo2(p);
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    return 0;
}

int foo1(int num)
{
    num += 10;
    return num;
}

int foo2(int *p)
{
    (*p) += 20;
    return (*p);
}
