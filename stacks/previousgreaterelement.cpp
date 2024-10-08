#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> pge(vector<int>& arr){
    stack<int> st;
    int n = arr.size();
    vector<int> ans(n);

    ans[0] = -1; 
    st.push(arr[0]);

    for(int i = 1; i < n; i++){
        while(st.size() > 0 && arr[i] >= st.top()){
            st.pop();
        }
        if(st.size() == 0)
            ans[i] = -1;
        else
            ans[i] = st.top();

        st.push(arr[i]);
    }

    return ans;
}

int main(){
    vector<int> arr = {35, 2, 24, 632, 42, 64, 72, 32, 67};
    vector<int> k = pge(arr);

    for(int i = 0; i < k.size(); i++){
        cout << k[i] << " ";
    }

    return 0;
}
