#include <iostream>
#include <iomanip>

int main()
{
    int s, v;
    std::cin >> s >> v;

    double t_walk = (double)(s) / v;
    double t_total = t_walk + 10;

    int arrival_time = 8 * 60;

    double latest_departure = arrival_time - t_total;

    if (latest_departure < 0)
        latest_departure = (latest_departure + 24 * 60);

    int hours = (int)(latest_departure) / 60;
    int minutes = (int)(latest_departure) % 60;

    std::cout << std::setw(2) << std::setfill('0') << hours << ":"
              << std::setw(2) << std::setfill('0') << minutes << std::endl;

    return 0;
}