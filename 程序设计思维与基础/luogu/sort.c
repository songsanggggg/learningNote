#include <stdio.h>

void printArr(const int *arr, int count);
void swap(int *arr, int a, int b);
void bubbleSort(int *arr, int count);
void selectionSort(int *arr, int count);
void insertionSort(int *arr, int count);
void quickSort(int *arr, int low, int high);
int partition(int *arr, int low, int high);

int main()
{
    int i[7] = {85, 60, 73, 84, 55, 70, 65};
    quickSort(i, 0, 6);
    printArr(i, 7);

    return 0;
}

inline void printArr(const int *arr, int count)
{
    for (int i = 0; i < count; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

inline void swap(int *arr, int a, int b)
{
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void bubbleSort(int *arr, int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
}

void selectionSort(int *arr, int count)
{
    int temp;
    for (int i = 0; i < count - 1; i++)
    {
        temp = i;
        for (int j = i; j < count; j++)
        {
            if (arr[j] < arr[temp])
                temp = j;
        }
        swap(arr, i, temp);
    }
}

void insertionSort(int *arr, int count)
{
    for (int i = 1; i < count; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr, j, j - 1);
        }
        printArr(arr, 4);
    }
}

void quickSort(int *arr, int low, int high)
{
    if (low >= high)
        return;
    int base = partition(arr, low, high);
    quickSort(arr, low, base - 1);
    quickSort(arr, base + 1, high);
}

int partition(int *arr, int low, int high)
{
    int baseSpace = low;
    for (int i = low; i < high; i++)
    {
        if (arr[i] < arr[high])
        {
            swap(arr, baseSpace, i);
            baseSpace++;
        }
    }
    swap(arr, baseSpace, high);
    return baseSpace;
}