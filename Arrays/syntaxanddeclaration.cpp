#include<iostream>
using namespace std;
int main(){
    int arr[10];
    arr[0]=9;
    arr[1]=0;
    arr[2]=4;
    arr[3]=34;
    arr[4]=32;
    arr[5]=12;
    arr[6]=122;
    arr[7]=9;
    arr[8]=23;
    arr[9]=23;
    // cout<<arr[1]<<" "<<arr[2]<<arr[3]<<" "<<arr[4]<<endl;
    int array[8];

    for(int i=0; i<8; i++){
        cin>>array[i];
    }
    for(int i=0; i<8;i++){
        cout<<array[i]<<" ";
    }
}