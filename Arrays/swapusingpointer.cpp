#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main(){
    int a = 5 ;
    cout<<sizeof(a)<<endl;
    cout<<&a<<endl;
    int* p = &a;
    cout<<p<<endl;
    cout<<*p<<endl;
    int b=9;
    int *ptr1 = &a;
    int *ptr2 = &b;
    swap(ptr1,ptr2);
    cout<<a<<" "<<b<<endl;
    return 0;
}


