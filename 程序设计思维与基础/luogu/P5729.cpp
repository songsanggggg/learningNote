#include<iostream>
using namespace std;

struct cutArgument
{
    int xStart = 0;
    int yStart = 0;
    int zStart = 0;
    int xEnd = 0;
    int yEnd = 0;
    int zEnd = 0;
};

int min(int a, int b);

int main()
{
    int totalCubeW = 0, totalCubeX = 0, totalCubeH = 0;
    cin >> totalCubeW >> totalCubeX >> totalCubeH;
    
    int cutNum = 0;
    cin >> cutNum;

    cutArgument cutArr[cutNum] = {};
    for(int i = 0; i < cutNum; i++)
    {
        cin >> cutArr[i].xStart >> cutArr[i].yStart >> cutArr[i].zStart;
        cin >> cutArr[i].xEnd >> cutArr[i].yEnd >> cutArr[i].zEnd;
    }

    return 0;
}

inline int min(int a, int b)
{
    return (a >= b? a : b);
}