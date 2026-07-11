// print out the sum of elements in the second row of the array 
#include<iostream>  
using namespace std ;


int main(){

    int arr[3][3]={{1,4,9},{11,4,3},{2,2,3}};
    int n= 3;
    int m=3;

    int sum=0;
    for(int i=0;i<m;i++){
        sum+=arr[1][i];
    }

    cout<<" the sum of elements in the second row of the array is : "<<sum<<endl;

return 0;

}