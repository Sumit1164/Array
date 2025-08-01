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





#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[7] = {6, 7, 9, 11, 4, 3, 21};
    int secondMax = INT_MIN;
    int ans = INT_MIN;
    for (int i = 0; i < 7; i++){
        if(arr[i] > secondMax){
            secondMax = arr[i];
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (secondMax != arr[i])
        {
            ans = max(arr[i], ans);
        }
    }
    cout << ans;
    return 0;
}


// Missing Number in array

*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size + 1;
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    int ans = n * (n + 1) / 2;
    cout << "Missing Number: " << ans - sum << endl;
    return 0;
}
