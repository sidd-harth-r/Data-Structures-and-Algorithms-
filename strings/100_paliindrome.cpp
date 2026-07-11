#include<iostream>  
#include<cstring>
using namespace std ;

bool ispalindrome(char arr[],int n){
    

for(int i=0;i<n/2;i++){
    if(arr[i]!=arr[n-i-1]){
        return 0;
    }
}
return 1;
}


int main(){

char arr[30];
cout<<"enter your string : ";
cin.getline(arr,30);
cout<<ispalindrome(arr,strlen(arr));
return 0;

}
