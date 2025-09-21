#include<iostream>
#include <cstring>
using namespace std;

int stringtoint(char *a,int n){
    if (n==0) return 0;

    int digit =a[n-1]-'0';
    return stringtoint(a,n-1)*10+digit;
}



int main() {

	char a[] = "1234";
    int n=strlen(a);
	cout <<stringtoint(a,n)<< endl;

	return 0;
}