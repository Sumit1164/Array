/*

// Search element in array

#include<iostream>
using namespace std;
int main(){
    int arr[7] = {30, 60, 5, 36, 59, 45, 1};
    int target = 1;
    for (int i = 0; i < 7; i++ ){
        if(arr[i] == target){
            cout <<"Index number is : "<<  i << endl;
            return 0;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}



// Revesre an array



#include<iostream>
using namespace std;
int main(){
    int arr[6] = {5, 2, 6, 3, 8, 7};
    int start = 0, end = 5;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    };
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}



// Second Max value in given array


*/