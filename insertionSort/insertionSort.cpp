#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int>&arr){
  for(int i=1;i<arr.size();i++){
    int j=i;
    while(j>=1 && arr[j]<arr[j-1]){
      swap(arr[j],arr[j-1]);
      j--;
    }
  }
}
int main(){
  vector<int>arr={25,52,241,72,24};
  insertion_sort(arr);
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
}
