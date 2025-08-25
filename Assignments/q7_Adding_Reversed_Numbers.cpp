#include <iostream>
using namespace std;
int main() {
    int n ,n1,n2,d,d2,d3,ans,ans1,temp,fans;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(cin>>n1;n1>0;n1/=10){
            if(n1>=10){
                d=n1%10;
                ans=ans*10+d;
            }
            else{
                ans=n1;
                break;
            }
            
        }
        for(cin>>n2;n2>0;n2/=10){
            if(n2>=10){
                d2=n2%10;
                ans1=ans1*10+d2;
            }
            else{
                ans1=n2;
                break;
            }
            
        }
        temp=ans+ans1;
        for(temp;temp>0;temp/=10){
            if(temp>=10){
                d3=temp%10;
                fans=fans*10+d3;
            }
            else{
                fans=temp;
                break;
            }
            
        }
    cout<<fans<<endl;
    }
    return 0;
}