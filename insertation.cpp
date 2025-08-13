
/*
// Insretation Increasing order

#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5, 65, 6, 21, 17};
    for (int i = 1; i < 5;i++){
        for (int j = i; j > 0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j - 1]);
            }
            else break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
            cout << arr[i] << " ";
    }
    return 0;
}


// Insretation Sort Decreasing order
*/

#include<iostream>
using namespace std;
int main(){
    int arr[7] = {3, 1, 2, 4, 5, 8, 0};
    for (int i = 1; i < 7; i++){
        for (int j = i; j > 0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j - 1]);
            }
            else break;
        }
    }
    for (int i = 6; i >=0; i--){
        cout << arr[i]<<" ";
    }

    return 0;
}