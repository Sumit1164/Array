// Bubble sort 

#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {6, 35, 1, 5, 2}; // i = 3   -> n -2;
    for (int i = 3; i >= 0; i--)
    {
        for (int j = 0; j<=i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int j = 0; j < 5; j++)
    {
        cout << arr[j]<<" ";
    }
        return 0;
}