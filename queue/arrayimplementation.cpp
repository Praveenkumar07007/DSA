#include<iostream>
#include<queue>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int arr[5];
    Queue(){
        f=0,b=0;
    }

    void push(int val){
        if(b==5){
            cout<<"Queue is full!"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }

    void pop(){
        if(f-b==0){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        f++;
    }

    int front(){
         if(f-b==0){
        cout<<"Queue is empty!"<<endl;
        return -1;
        }
        return arr[f];
    }
    int size(){
        return b-f;
    }

    bool empty(){
        if(f-b==0){
            cout<<"Queue is empty!"<<endl;
            return true;
        }
        return false;
    }

    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.display();
    q.push(5);
    q.push(6);
    q.display();
    q.pop();
    q.display();
 return 0;
}