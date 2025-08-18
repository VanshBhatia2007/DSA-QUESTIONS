#include <iostream>
using namespace std;
int main() {
	string a;
	cin>>a;
	if(a>="A" and a<="Z"){
		cout<<"uppercase"<<endl;
	}
	else if(a>="a" and a<="z"){
		cout<<"lowercase"<<endl;
	}
	else{
		cout<<"invalid"<<endl;
	}
	return 0;
}