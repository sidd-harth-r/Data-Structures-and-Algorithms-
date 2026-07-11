// print the number 7's in the array 

#include<iostream>  
using namespace std ;


int main(){
int arr[2][3]={{4,7,8},{8,8,7}};
int n =2;
int m=3;
int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==7){
    count++;
        }
    }
}

cout<<"the number of 7's in the array is : "<<count<<endl;
return 0;

}