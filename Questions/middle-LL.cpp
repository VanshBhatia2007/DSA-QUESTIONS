#include<iostream>
using namespace std;

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
    cout<<length(head)<<endl;
    print(head);

    node* ans=middleofll(head);
    cout<<"middle: "<<ans->data;
    return 0;
}