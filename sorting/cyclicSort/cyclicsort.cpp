// where to use ?
// 1. when we have to sort an array of numbers from 1 to n or 0 to n-1
// 2. when we have to sort an array of numbers from 1 to n or 0 to n-1 and there are duplicates
// 3. when we have to do some work from 1 to n or 0 to n-1 and there are duplicates

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr [] = {3, 5, 2, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n){
        int correctIndex = arr[i]-1;
        if(i==correctIndex) i++;
        else{
            swap(arr[i], arr[correctIndex]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
