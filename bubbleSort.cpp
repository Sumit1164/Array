// Bubble sort 

/*
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


// Taking input from the user 




#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n;
    cout<< "Enter the size of an array: ";
    cin >> n;
    cout << "Enter the element in array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = n - 2; i >= 0; i--){
        bool swapped = 0;
        for (int j = 0; j <= i; j++){
            if(arr[j] > arr[j+1]){
                swapped = 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        if(swapped ==0)
            break;
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}


*/

#include <iostream>
using namespace std;
int main()
{
    // bubble sort decresing order
    int arr[6] = {45, 3, 67, 2, 56, 1};
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}