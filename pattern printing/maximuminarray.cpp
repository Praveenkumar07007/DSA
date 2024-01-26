#include<iostream>

using namespace std;

int main(){
    int arr[]={3,4,2,25,62,68,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i]; 
        }
        
    }
    cout<<max;
}