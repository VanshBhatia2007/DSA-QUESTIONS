#include<iostream>
#include<stack>
using namespace std;

void push_bottom(stack<int> &s,int topelment){
    //base case
    if(s.empty()){
        s.push(topelment);
        return;
    }
    //recursive case
    int top = s.top();
    s.pop();
    push_bottom(s,topelment);
    s.push(top);
}

void reversestack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    //recursive case
    int topelement =s.top();
    s.pop();
    reversestack(s);
    push_bottom(s,topelement);
}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    print(s);
    reversestack(s);
    print(s);
    return 0;
}