#include <iostream>
#include <cstring>

struct Student
{
    char name[4];
    int year;
    bool male;
};

int main()
{
    /*     int num = 10;
        int *p1 = NULL, *p2 = NULL;
        p1 = p2 = &num;
        std::cout << num << std::endl;
        *p1 = 20;
        std::cout << num << std::endl;
        *p2 = 30;
        std::cout << num << std::endl; */
    /*     Student stu = {"Yu", 2000, true};
        Student *pStu = &stu;
        pStu->male = false;
        std::cout << "male:" << (pStu->male ? "man" : "woman") << std::endl;
        (*pStu).year = 2001;
        std::cout << "year:" << (*pStu).year << std::endl;
        strncpy(pStu->name, "Li", 4);
        std::cout << "name:" << pStu->name << std::endl; */

    /* Student stu[128];
    std::cout << &stu << std::endl;
    std::cout << stu << std::endl;
    std::cout << &stu[0] << std::endl;

    Student *p = stu;
    p[0].male = false;
    std::cout << "male:" << (p[0].male ? "male" : "female") << std::endl; */

    /* int nums[4] = {1, 2, 3, 4};

    int *p = nums;
    p++;
    *p = 30;
    for (int i = 0; i < 4; i++)
    {
        std::cout << "nums[" << i << "]: " << nums[i] << std::endl;
    } */

    return 0;
}