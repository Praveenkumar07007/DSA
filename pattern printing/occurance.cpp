#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(10);

    for(int i=0; i<10; i++){
        cin >> v[i];
    }

    int x;
    cout<<"x: ";
    cin >> x;
    int count = 0;

    for(int i=0; i<10; i++){
        if(v[i]==x){
            count++;
        }
    }

    for(int i=0; i<v.size(); i++) {
        cout << v[i] <<" ";
    }
    cout<<endl;
    cout<<count<<endl;
    }

