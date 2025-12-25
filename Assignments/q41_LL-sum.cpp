#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int d){
        data =d;
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


int sum(node* head,node* tail,node* head1,node* tail1){
    int a,sum=0,sum1=0;
    while(head!=NULL and head1!=NULL){
        sum=sum+head->data;
        head=head->next;
        sum1=sum1+head1->data;
        head1=head1->next;
    }
    a=sum+sum1;
    return a;
}

void sumlist(node* &head2,node* &tail2,int ans){
    int dig=0;
    //base case
    if(ans<0){
        return;
    }
    //recursive case
    dig=ans%10;
    insertatend(head2,tail2,dig);
    ans=ans/10;
    sumlist(head2->next,tail2,ans);
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
    node* head2,*tail2;
    head=tail=NULL;
    head1=tail1=NULL;
    head2=tail2=NULL;
    int n,n1,num;
    cin>>n>>n1;
    for(int i=0;i<n;i++){
        cin>>num;
        insertatend(head,tail,num);
    }
    for(int i=0;i<n1;i++){
        cin>>num;
        insertatend(head1,tail1,num);
    }
    print(head);
    print(head1);
    int ans =sum(head,tail,head1,tail1);
    cout<<ans<<endl;
    sumlist(head2,tail2,ans);
    print(head2);
    return 0;
}