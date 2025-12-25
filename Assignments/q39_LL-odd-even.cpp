#include <iostream>
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
 
void insertatend(node* &head,node* &tail,int d){
    if(head==NULL){
        node* n=new node(d);
        head=tail=n;
    }
    else{
        node* n=new node(d);
        tail->next=n;
        tail=n;
    }
}
//odd even

void oddeven(node* &head,node* &tail){
    node* temp=head,*prev=NULL,*save=NULL;
    while(head->data==NULL){
        if(head->data %2!=0){
            prev=head;
            head=head->next;
        }
        else{
            while(head->data%2!=0){
                prev=head;
                head=head->next;
            }
            save=prev->next;
            prev->next=head->next;
            head->next=prev;
        }
        head=head->next;
    }
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
    head=tail=NULL;  
    insertatend(head,tail,1); 
    insertatend(head,tail,2); 
    insertatend(head,tail,3);
    print(head);
    return 0; 
}