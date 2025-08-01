/**/

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