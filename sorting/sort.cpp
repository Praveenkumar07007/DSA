#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    int n ;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    sort(v.begin(),v.end(),greater<int>());
    cout<<endl;
    for(int  i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
