#include<iostream>
using namespace std;

    struct node {
        struct node * prev;
        int data;
        struct node * next;
    };
    struct node *temp,*head=NULL;
    int main(){
        int choice;
        cout<<"Enter choice: ";
        cin >> choice;
        while(choice){
            struct node * newnode=new node();
            cout<<"Enter new node: ";
            cin >> newnode;
    }
}
