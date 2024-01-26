#include<iostream>
#include<vector>
#include<algorithm>
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
    cin >> n;
    vector<int> v;
    
    // Read elements into the vector using push_back
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        v.push_back(element);
    }
    
    print(v);
    
    make_heap(v.begin(), v.end());
    v.erase(v.begin());
    make_heap(v.begin(), v.end());
    print(v);
    return 0;
}
