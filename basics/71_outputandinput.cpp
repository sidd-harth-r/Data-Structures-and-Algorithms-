#include<iostream>
using namespace std ;

int main(){
    
int n; 
cout<<"enter the length of the array : "<<endl;
cin>>n;
int arr[n];
cout<<"enter the array elements "<<endl;

for(int i=0;i<n;i++){
    cout<<"enter the value of arr["<<i<<"] : "<<endl;
    cin>>arr[i];
}

cout<<"the array elements are : "<<endl;
for(int i=0;i<n;i++){
cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
}
 return 0;
}