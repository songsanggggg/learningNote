#include <iostream>

int main()
{
    for (int i = 0; i < 1024; i++)
    {
        int *p = (int *)malloc(1024 * 1024 * 1024);
    }
    std::cout << "Finished!" << std::endl;

    return 0;
}