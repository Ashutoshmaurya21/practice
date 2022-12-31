#include<iostream>
using namespace std;
 struct node{
     int data;
     node *next;
 };
 
 
 node *newnode(int val)
{
    node *temp=new node;
    temp->data=val;
    temp->next=NULL;
    return temp;
}


node *createlinkedlist(int n){
    int a;
    node *head =NULL;
    node *tail =NULL;
    for(int i=0;i<n;i++){
        cin>>a;
        node *temp=newnode(a);
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else {
        tail->next=temp;
        tail=temp;
    }
    }
    return head;
}


void printlinkedlist( node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head =head->next;
    }
}

int main(){
    int n;
    cin>>n;
    node *head=createlinkedlist(n);
    cout<<"printing list : ";
    
    printlinkedlist(head);
    return 0;
}
