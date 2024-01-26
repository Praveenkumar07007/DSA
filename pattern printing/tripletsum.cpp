#include<iostream>
using namespace std;
int main(){
    int sum;
    cin >> sum;
    int count=0;
    int arr[6]={3,1,2,4,0,6};
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6;j++){
            for(int k=i+2; k<6;k++){
                int all=arr[k]+arr[j]+arr[i];
                if(all==sum){
                    count++;
                }
        }
    }

}
cout<<count<<endl;
return 0;
}