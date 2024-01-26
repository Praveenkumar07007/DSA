#include<iostream>
#include<math.h>

using namespace std;

int square(int a){
    int result =pow(a,2);
    return result;
}
int main(){
    for(int i = 0; i <5;i++){
    int result = square(i);
    cout << result<<" ";
    }
}