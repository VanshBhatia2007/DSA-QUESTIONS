#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};

void insertatend(node* &head ,node* &tail,int d ){
    if(head==NULL){
        node* n=new node(d);
        head =tail=n;
    }
    else{
        node* n=new node(d);
        tail->next=n;
        tail=n;
    }
}

void reverse(node* &head,node* &tail){
    node* c=head,*p=NULL,*n;

    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    swap(head,tail);
}

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<"NULL\n";
}

int main(){
    node* head,*tail;
    int n,target;
    head=tail=NULL;
    for(int i=0;n!=-1;i++){
        cin>>n;
        if(n==-1) break;
        insertatend(head,tail,n);
    }
    cin>>target;
    reverse(head,tail);
    for(int j=1;head!=NULL;j++){
        if(j==target){
            cout<<head->data;
            break;
        }
        head=head->next;
    }
    return 0;
}