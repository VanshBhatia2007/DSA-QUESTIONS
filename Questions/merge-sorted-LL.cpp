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
node* mergell(node* a,node* b){
    //base case
    if(a==NULL) return b;
    if(b==NULL) return a;
    //recursive case
    node* nh;
    if(a->data<b->data){
        node* nh=a;
        nh->next=mergell(a->next,b);
        return nh;
    }
    else{
        node* nh=b;
        nh->next=mergell(a,b->next);
        return nh; 
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
    node* head1,*tail1;
    head=tail=NULL;
    head1=tail1=NULL;
    insertatend(head,tail,2);
    insertatend(head,tail,4);
    insertatend(head,tail,6);
    insertatend(head,tail,7);
    insertatend(head1,tail1,1);
    insertatend(head1,tail1,3);
    insertatend(head1,tail1,5);
    print(head1);
    print(head);
    node* h=mergell(head,head1);
    print(h);
    return 0;
}