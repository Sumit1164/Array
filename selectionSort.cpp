
// Selection Sort - select and swap position this is selection sort, if n number of array(element) then n-1 time sort the array

#include<iostream>
using namespace std;
int main(){
    int arry[8] = {3, 8, 57, 4, 9, 45, 1, 0};
    for (int i = 0; i < 7; i++){
        int index = i;
        for (int j = i + 1; j < 8; j++){
            if(arry[j]< arry[index])
                index = j;
        }
        swap(arry[i], arry[index]);
    }
    for (int i = 0; i < 8; i++)
    {
        cout << arry[i] << " ";
    }
    
    return 0;
}



// Using Selection Sort to sort the given array into descending order:

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {78, 734, 978, 3, 1};
    for (int i = 0; i < 4; i++)
    {
        int index = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] > arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }
    cout << "Sorted array in descending order: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
