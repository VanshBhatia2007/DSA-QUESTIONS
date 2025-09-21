#include <iostream>
using namespace std;
void spiralprint(int a[][100],int n,int m){
    
    int sr=0,sc=0,er=n-1,ec=m-1;
    while(sr<=er and sc<=ec){
        //1. print sr [sr,ec]
        for(int c=sc;c<=ec;++c){
            cout<<a[sr][c]<<" ";
        }
        sr++;
        //2. print ec [sr,er]
        for(int r=sr;r<=er;++r){
            cout<<a[r][ec]<<" ";
        }
        ec--;
        if(sr<er){
            //3. print er [ec,sc]
            for(int c=ec;c>=sc;--c){
                cout<<a[er][c]<<" ";
            }
            er--;
        }
        if(sc<ec){
            //4. print sc[er,sr]
            for(int r=er;r>=sr;--r){
                cout<<a[r][sc]<<" ";
            }
            sc++;
        }
    }
}

int main(){
    //making array
    int a[100][100];
	int number = 1;
	int r, c;
	cout << "Enter r and c : ";
	cin >> r >> c;
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			a[i][j] = number;
			number++;
		}
	}
    for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
    spiralprint(a,r,c);

    return 0;
}
