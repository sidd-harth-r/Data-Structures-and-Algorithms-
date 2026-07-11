// given that it is square matrix 
// rotating in anti clockwise dirction 

#include<iostream>  
using namespace std ;

void rotate1(int arr[][3],int n){     // its taking extra space 
    int mat[10][10];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        mat[j][n-i-1]=arr[i][j];
        }
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
     cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void rotate2(int arr[][3],int n){      
    
for(int i=0;i<n;i++){              // taking transpose
    for(int j=i+1;j<n;j++){
        swap(arr[i][j],arr[j][i]);  // For anticlockwise rotation, instead of reversing rows, you’d reverse columns after transpose.
    }
}
  
for(int i=0;i<n;i++){               //  reversing rows
   for(int j=0;j<n/2;j++){
    swap(arr[i][j],arr[i][n-1-j]);
   }
}
 for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
     cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    


}


int main(){
 int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 rotate2(arr,3);

return 0;

}