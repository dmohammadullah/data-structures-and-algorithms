#include <iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

Pair getminMax(int arr[], int n)
{
    struct Pair minMax;
    int i;

    //if one there have one element
    if (n == 1)
    {
        minMax.min = arr[0];
        minMax.max = arr[0];
        return minMax;
    }

    //if more then one element then initialize
    if (arr[0] > arr[1])
    {
        minMax.max = arr[0];
        minMax.min = arr[1];
    }
    else
    {
        minMax.min = arr[0];
        minMax.max = arr[1];
    }


    for (i = 2; i < n; i++)
    {
        if (arr[i] > minMax.max)
        {
            minMax.max = arr[i];
        }
        else if (arr[i] < minMax.min)
        {
            minMax.min = arr[i];
        }
    }
    return minMax;
}

int main()
{
    int arr[] = {111, 54, 0,-5};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "len is: " << len << "\n";

    struct Pair minMax = getminMax(arr, len);

    cout << "Maximum Number : " << minMax.max << "\n";
    cout << "Minimum Number : " << minMax.min << "\n";
}