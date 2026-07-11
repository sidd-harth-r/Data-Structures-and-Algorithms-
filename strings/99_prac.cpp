// reverse a character array

#include<iostream>
#include<cstring>  

using namespace std ;

void Reverse_char_array(char arr[],int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    cout<<arr<<endl;

}


int main(){
char word[]="codes";
Reverse_char_array(word,strlen(word));

return 0;

}
