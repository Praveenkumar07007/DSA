#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v) {
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    print(v);
    make_heap(v.begin(),v.end());
    print(v);
}