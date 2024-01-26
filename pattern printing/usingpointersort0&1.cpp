#include<iostream>
#include<vector>
using namespace std;

void sortzerosandones(vector<int> &v){
    int leftpointer=0;
    int rightpointer=v.size()-1;
    while(leftpointer<rightpointer){
        if(v[leftpointer]==1 && v[rightpointer]==0){
            v[leftpointer++]=0;
            v[rightpointer--]=1;
        }
        if(v[leftpointer]==0){
            leftpointer++;
        }
        if(v[rightpointer]==1){
            rightpointer--;
    }
}
} 

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n;i++){
        int ele; cin >> ele;
        v.push_back(ele);
    }
    sortzerosandones(v);

    for(int i=0; i<n;i++){
        cout << v[i]<<" ";
    }
    return 0;
}