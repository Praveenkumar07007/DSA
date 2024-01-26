#include<iostream>

using namespace std;

int main(){
    int arr[]={4,6,3,9,8,5};
    int data;
     cin>>data;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        if(arr[i]==data){
            cout<<i+1<<endl;
        }
    }
}