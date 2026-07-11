// 
#include<iostream>  
using namespace std ;

bool Search_in_Sorted_matrix1(int arr[][4],int n,int m,int key){
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==key){
         cout<<"the key is found at ("<<i<<","<<j<<")"<<endl;
         return 1;   
        }
    }
   }
    cout<<"the key is not found "<<endl;
    return 0;
   
}

bool Search_in_Sorted_matrix2(int arr[][4],int n,int m,int key){
   int rows=0;
   
   while(rows <n){
    int start=0;
    int end=m-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[rows][mid]==key){
          cout<<"the key is found at ("<<rows<<","<<mid<<")"<<endl;
         return 1;  
        }
        else if(arr[rows][mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    rows++;
   }
    cout<<"the key is not found "<<endl;
    return 0;
   
   
}

 
   bool Search_in_Sorted_matrix3(int arr[][4],int n,int m,int key){
    int row=0;
    int col=m-1;

    while(row<n && col>=0){
       int search=arr[row][col];
       if(search==key){
        cout<<"the key is found at ("<<row<<","<<col<<")"<<endl;
         return 1;
       }
       else if(search>key){
        col--;
       }
       else{
        row++;
       }

    }
    cout<<"the key is not found "<<endl;
    return 0;
   
}




int main(){
    int arr[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}} ;
    int key=33;
    
    
  cout<< Search_in_Sorted_matrix2(arr, 4,4,33);
return 0;

}