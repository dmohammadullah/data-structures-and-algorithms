#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int start, int end)
{
    //cout<<"end: "<<end;
    for (int i = start; i < end; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(arr) / sizeof(arr[0]);

    //printArray(arr, 0, len);
    reverseArray(arr, 0, len - 1);
    //cout<<"\nend: "<<len;
    printArray(arr, 0, len);

    // cout<<"done";
}