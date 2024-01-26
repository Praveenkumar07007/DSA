#include<iostream>
#include<vector>
using namespace std;

void sortzerosandones(vector<int> &v){
    int zerocount=0;
    for(int ele:v){
        if(ele==0){
            zerocount++;
        }
}
for(int i=0;i<v.size();i++){
    if(i<zerocount){
        v[i]=0;
    }
    else{
        v[i]=1;
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