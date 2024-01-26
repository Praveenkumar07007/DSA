#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSuffixSum(vector<int>& v){
    int totalsum=0;
    for(int i=0; i<v.size(); i++){
        totalsum+=v[i];
    }
    int prefixSum=0;
    for(int i=0; i<v.size(); i++){
        prefixSum+=v[i];
        int suffixSum=totalsum-prefixSum;
        if(prefixSum==suffixSum) {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout<<checkPrefixSuffixSum( v)<<endl;
 return 0;
}