
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