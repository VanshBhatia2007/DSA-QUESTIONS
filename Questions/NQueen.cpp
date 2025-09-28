#include<iostream>
using namespace std;

bool safe(int board[][100],int i,int j,int n){
    //check current col for queen
    for(int r=0;r<i;++r){
        if(board[r][j]==1){
            return false;
        }
    }
    int oj=j;
    int oi=i;
    //check upper left diagonal for queen
    while(i>=0 and j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;
    }
    i=oi;
    j=oj;
    //check upper right diagonal for queen
    while(i>=0 and j<n){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j++;
    }
    return true;

}

bool nqueen(int board[][100],int row,int n){
    //base case
    if(row==n){
        //print solution
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if(board[i][j]==1){
                    cout<<"Q ";
                }
                else{
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }

    //recursive case
    for(int col=0;col<n;++col){
        if(safe(board,row,col,n)){
            board[row][col]=1; //place the queen
            bool bakiqueen = nqueen(board,row+1,n);
            if(bakiqueen) return true; 
            board[row][col]=0;//backtraking
        }
    }
    return false;

}

int main(){
    int board[100][100]={0};
    int n;
    cin>>n;
    nqueen(board,0,n);
    return 0;
}