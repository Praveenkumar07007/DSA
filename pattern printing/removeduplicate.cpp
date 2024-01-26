#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int arrnew[5];
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[i]==arr[j]){
                continue;
            }
            else{
                arrnew[i]=arr[j];
            }
        }
    }
    for(int i=0; i<5; i++) {
        cout<<arrnew[i]<<" ";
    }
 return 0;
}