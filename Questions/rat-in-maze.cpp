#include<iostream>
using namespace std;

bool ratinmaze(char maze[][5],int i,int j,int n,int m,int sol[][10]){
    //base case
    if(i==n-1 and j==m-1){
        //print the solution
        sol[i][j]=1;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    //recursive case
    sol[i][j]=1;//asume current cell to be the part of solution
    //check right
    if(j+1<m and maze[i][j+1]!='X'){
        bool right=ratinmaze(maze,i,j+1,n,m,sol);
        if(right){
            return true;
        }
    }
    //check down
    if(i+1<n and maze[i+1][j]!='X'){
        bool down=ratinmaze(maze,i+1,j,n,m,sol);
        if(down){
            return true;
        }
    }
    sol[i][j] = 0;//backtracking
	return false; // i,j cell se possible nhi h maze solve kar paana

}

int main(){
    char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00",
	};

	int sol[10][10] = {0};
	ratinmaze(maze, 0, 0, 4, 4, sol);


	return 0;

}