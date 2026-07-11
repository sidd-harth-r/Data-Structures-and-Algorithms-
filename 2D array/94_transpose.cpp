// finding the transpose of the matrix 

#include<iostream>  
using namespace std ;


int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    int n=2;
    int m=3;
    int transpose[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<"\n";
    }

return 0;

}