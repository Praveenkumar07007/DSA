#include<iostream>
using namespace std;
    class Node{
        public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val = val;
            this->next =NULL;
            this->prev =NULL;
        }
    };
    class DLL{
        public:
        Node* head;
    Node* tail;
    int size;
    DLL(){
        tail=head = NULL;
        size=0;
    }
     void insertAtEnd(int val){
        Node*temp=new Node(val);
        if(size==0){head=tail=temp;}
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }

    void insertAthead(int val){
        Node*temp=new Node(val);
        if(size==0){head=tail=temp;}
        else{
            temp->next=head;
            head->prev=temp;
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
            t->prev=temp;
            t->next->prev=t;
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
    if(head){
    head->prev=NULL;
    }
    if(head==NULL) tail=NULL;
    size--;
}

 void deleteAtTail(){
    if(size==0){ return;}
    else if(size==1){ deleteAtHead(); return;}
    Node* temp=tail->prev;
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
        temp->next->prev=temp;
        size--;
    }
 }
    };
int main()
{
    DLL list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();
    list.insertAthead(50);
    list.display();
    list.insertAtIndex(2,80);
    list.deleteAtHead();
    list.deleteAtTail();
    list.display();
    return 0;
}