#include<iostream>

using namespace std;

int main(){
    int arr[5];
    cout<<"how many element you want to insert into the array";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}