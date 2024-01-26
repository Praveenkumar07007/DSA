#include<iostream>
using namespace std;
class Node{
public: 
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next =NULL;
    }
};


void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }cout<<endl;

    //displaying recurisively all values
    // Node* temp=head;
    // if(temp==NULL) return;
    // cout<<temp->val<<endl;
    // display(temp->next);
}


void revdisplay(Node* head){
    Node* temp=head;
    if(temp==NULL) return;  //ask gpt
    revdisplay(temp->next);
    cout<<temp->val<<" ";
    }


void insertAtEnd(Node* head,int val){
    Node*t=new Node(val);
    while(head->next!=NULL) head=head->next;
    head->next=t;
}


int main()
{
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next =b;
    b->next =c;
    c->next =d;
    Node * temp=a; 
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }cout<<endl;
    insertAtEnd(a,10);
    display(a);
    revdisplay(a);

 return 0;
}