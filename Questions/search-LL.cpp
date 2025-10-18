#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int d){
        data =d;
        next =NULL;
    }
};

void insertatfront(node* &head ,node* &tail,int d){
    if(head==NULL){
        node* n=new node(d);
        head=tail=n;
    }
    else{
        node* n=new node(d);
        n->next=head;
        head=n;
    }
}

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

int length(node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}

void insertatmid(node* head,node* tail,int pos,int d){
    if(pos>length(head)){
        insertatend(head,tail,d);
    }
    else if(pos==0){
        insertatfront(head,tail,d);
    }
    else{
        node* temp=head;
        for(int i=0;i<pos-1;++i){
        temp=temp->next;
        }
        node* n=new node(d);
        n->next=temp->next;
        temp->next =n;
    }
    
}

node* searchll(node* head,int key){
    //base case
    if(head==NULL){
        return NULL;
    }
    //recursive case
    if(head->data==key){
        return head;
    }
    return searchll(head->next,key);
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
    insertatend(head,tail,4);
    insertatend(head,tail,5);
    print(head);
    node* ans=searchll(head,4);
    if(ans==NULL) cout<<"key not found";
    else cout<<"key found: "<<ans->data;
    return 0;
    
}