/*

1- Simple create an array, store some values and prinf array using for loop

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int add = 0;
    for (int i = 0; i < n; i++){
        add += arr[i];
    }
    cout << add;
    return 0;
}


2 - Find the smallest value in the given array



#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[7] = {60,78,30,1,4,50,21,};
    int answer = INT_MAX, i;
    int ans = INT_MIN;
    for (i = 0; i < 8; i++ ){
        if(arr[i] < answer){
            answer = arr[i];
        }
        else if(ans < arr[i]){
            ans = arr[i];
        }
    }
    cout << "The smallest value is: " << answer << endl;
    cout << "The largest value is: " << ans;
    return 0;
}


// Taking array element from the user

*/

#include<iostream>
using namespace std;
int main(){
    int a;
    cout << sizeof(a)<<endl;
    int arr[5];
    cout << "Enter a number: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}
