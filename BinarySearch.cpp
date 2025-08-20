#include<iostream>
using namespace std;
int BinarySearch (int arr[], int n, int target){
    int start = 0, end = n - 1, mid;
    while (start<=end)
    {
        mid = (start + end) / 2;
        if(arr[mid]==target){
            cout << "Element Found! " << arr[mid];
            return mid;
        }
        else if(arr[mid]<target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[7];
    int n;
    cout << "Enter the number of element in array: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int target;
    cout << "Enter the target: ";
    cin >> target;
    cout << BinarySearch(arr, n, target);
    return 0;
}