#include<iostream>
using namespace std;
class Stack{
public:
    int arr[5];
    int idx=-1;
    Stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0]-1)){
            cout<<"stack is full!"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1){
            cout<<"stack is empty!"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"stack is empty!"<<endl;
            return -1 ;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    
 return 0;
}