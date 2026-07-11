#include<iostream>  
using namespace std ;

void Print_Spiral(int arr[][4],int n,int m){
    int top=0,bottom=n-1,left=0,right=m-1;

while(top<=bottom && right>=left){
    for(int i=left;i<=right;i++){
        cout<<arr[top][i]<<" ";
    }
    top++;
    for (int j=top;j<=bottom;j++){
        cout<<arr[j][right]<<" ";
    }
    right--;

    if(top<=bottom){
    for(int k=right;k>=left;k--){
        cout<<arr[bottom][k]<<" ";
    }
    bottom--;
}

  if(left<=right){


     for(int p=bottom;p>=top;p--){
        cout<<arr[p][left]<<" ";
    }
    left++;

}

}

    
}


int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4,m=4;

    Print_Spiral(arr ,n, m);
return 0;
}
