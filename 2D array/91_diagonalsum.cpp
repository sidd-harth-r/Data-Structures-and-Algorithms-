// given n=m


#include<iostream>  
using namespace std ;

void Diagonal_Sum1(int arr[][3],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=arr[i][j];

            }
            else if(i+j==n-1){
             sum+=arr[i][j];
            }
        }
    }
cout<<"the sum of the diagonal is : "<<sum<<endl;
}

void Diagonal_Sum2(int arr[][4],int n){      // optimized 
    int sum=0;
    for (int i=0;i<n;i++){
        
        
                sum+=arr[i][i];

            
         if(i!=n-i-1){
             sum+=arr[i][n-i-1];
            }
        }
    
cout<<"the sum of the diagonal is : "<<sum<<endl;
}


int main(){
    int arr1[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}} ;
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
   Diagonal_Sum2(arr1, 4);
return 0;

}


