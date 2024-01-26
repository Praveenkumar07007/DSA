#include<iostream>

using namespace std;
int prime(int a, int b){
    for(int i=2;i<=b;i++){
        if(a%i==0){
            cout<< i;
        }
    }
}
int main(){
   cout<< prime(2,10);
}