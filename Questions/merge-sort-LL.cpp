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
node* middleofll(node* head){
    if (head == NULL or head->next == NULL) return head;
    node* f=head->next;
    node* s=head;
    while(f!=NULL and f->next !=NULL){
        f=f->next->next;
        s=s->next;
    }
    return s;
}
node* mergesortll(node* head){
    //base case
    if(head==NULL or head->next==NULL) return head; 
    //recursive case
    node* a=head;
    node* m=middleofll(head);
    node* b=m->next;
    m->next =NULL;
    //sort
    a = mergesortll(a);
	b = mergesortll(b);

    node* nh=mergell(a,b);
    return nh;
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
    insertatend(head,tail,4);
    insertatend(head,tail,2);
    insertatend(head,tail,7);
    insertatend(head,tail,6);
    insertatend(head,tail,1);
    insertatend(head,tail,5);
    insertatend(head,tail,3);
    print(head);
    head = mergesortll(head);
	print(head);
    return 0;
}