#include<iostream>
using namespace std;
class Node{//user definde datatype
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next =NULL;
    }
};

class LinkedList{//user defined data structure
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        tail=head = NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node*temp=new Node(val);
        if(size==0){head=tail=temp;}
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

void insertAthead(int val){
        Node*temp=new Node(val);
        if(size==0){head=tail=temp;}
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }

void insertAtIndex(int idx,int val){
        if(idx<0||idx>size) cout<<"Invalid"<<endl;
        else if(idx==0) insertAthead(val);
        else if(idx==size) insertAtEnd(val); 
        else {
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
}

int getatIdx(int idx){
    if(idx<0||idx>=size){
     cout<<"Invalid Index";
     return -1;
    }
    else if(idx==0) return head->val;
    else if(idx==size) return tail->val;
    else {
        Node* temp=head;
        for(int i=1;i<=idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
}

void deleteAtHead(){
    if(size==0) return;
    head=head->next;
    size--;
}

 void deleteAtTail(){
    if(size==0) return;
    Node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;
 }

void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }cout<<endl;
}

 void deleteAtIndex(int idx){
    if(size==0) return;
    if(idx<0 || idx>=size){
        cout<<"Invalid index"<<endl;
    }
    else if(idx==0) return deleteAtHead();
    else if(idx==size-1) return deleteAtTail();
    else{
        Node* temp=head;
        for(int i=1;i<idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
 }
};
int main(){ 
    LinkedList ll ;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.display();
    // cout<<ll.size;

    ll.insertAthead(50);
    ll.display();
    ll.insertAtIndex(2,80);
    ll.display();
    cout<<ll.getatIdx(3)<<endl;
    ll.deleteAtHead();
    ll.deleteAtTail();
    ll.deleteAtIndex(1);
    ll.display();
}
