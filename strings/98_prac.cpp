// convert to upper 
#include<iostream>  
using namespace std ;


int main(){

char word[]="ApPle";
int i=0;
while(word[i]!='\0'){

if(word[i]>='a' && word[i]<='z'){
    word[i]=word[i]-32;
}
i++;

}
cout<<word<<endl;


return 0;

}
