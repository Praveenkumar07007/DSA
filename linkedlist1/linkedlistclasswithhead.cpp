#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
    public:
    Node *head;
    int size=0;
    LinkedList(){
        head = NULL;
    }

    int listsize(Node *head) {
        Node *temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        return size;
    }

    void insertAtEnd(int val, Node *head){
    Node *temp = head;
    Node *t=new Node(val);
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next =t;
    size++;
    }

    void insertAtHead(int val, Node *head){
    Node *t = new Node(val);
    if(size==0){
        head = t;
    }
    else{
        t->next = head;
        head = t;
    }
    size++;
    }


    void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }cout<<endl;
    }

};
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next =b;
    b->next =c;
    c->next =d; 
    d->next =e;
    Node* head=a;
    LinkedList ll;
    ll.display(a);
    ll.insertAtEnd(80,a);
    ll.display(a);
    ll.insertAtHead(80,a);
    ll.display(a);
    cout<<ll.listsize(a);
    return 0;
}