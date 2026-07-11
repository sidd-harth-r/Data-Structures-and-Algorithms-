#include<iostream>
#include<vector>


using namespace std ;

bool isSafe(vector<vector<char>>board,int rows ,int cols){
    int n=board.size();

 for(int j=0;j<n;j++){
    if(board[rows][j]=='Q'){
   return false ;
    }

 }

 for(int i=0;i<rows;i++){
    if(board[i][cols]=='Q') return false ;
 }

 for(int i=rows,j=cols;i>=0 && j>=0;i--,j--){
    if(board[i][j]=='Q') return false ;
 }
 for(int i=rows,j=cols;i>=0 && j<n;i--,j++){
    if(board[i][j]=='Q') return false ;
 }

 return true ;
}

void print(vector<vector<char>>board){
    int n=board.size();

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j];
    }
    cout<<"\n";

}
cout<<"\n--------------------";

}

int nqueens(vector<vector<char>>&board,int rows){
    int n=board.size();
    if(rows==n){
        print(board);
        
        return 1 ;
    }
    int count=0;
    for(int j=0;j<n;j++){
            
                if(isSafe(board,rows,j)){
           
            board[rows][j]='Q';
          count +=  nqueens(board,rows+1);
             board[rows][j]='.';

        }
    }


return count ;
}

int main(){
vector<vector<char>>board;
int n=4;
for(int i=0;i<4;i++){
    vector<char>temp;
    for(int j=0;j<4;j++){
        temp.push_back('.');
    }
    board.push_back(temp);
}
cout<<"the number of possible solutions are :"<<nqueens(board,0);
return 0;
}