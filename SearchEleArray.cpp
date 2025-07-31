#include<iostream>
using namespace std;
int main(){
    int arr[7] = {30, 60, 5, 36, 59, 45, 1};
    int i, target = 1;
    for (i = 0; i < 7; i++ ){
        if(arr[i] == target){
            cout << "This is " << arr[i];
        }
    }
        return 0;
}