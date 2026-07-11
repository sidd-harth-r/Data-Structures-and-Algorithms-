#include<iostream>  
using namespace std ;

void conversion_1Dto_2D(int *arr,int n, int m,int size){
    int mat[10][10];
    int row =0;
    int col=0;
    if(n*m<size){
        cout<<"cannot store all the elements in the 2D array"<<endl;
        return ;
    }
       for(int i=0;i<size;i++){
        if(col==m){
            col=0;
            row++;
        }
        if(row==n){
            break;
        }
        mat[row][col]=arr[i];
        col++;
       }

       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
       }

}

int main(){

int arr[]={1,2,3,4};
int size=sizeof(arr)/sizeof(int);

int n=2;
int m=2;

conversion_1Dto_2D(arr, n, m, size);
return 0;

}
