#include<iostream> 
#include<string>

using namespace std ;

bool ispalindrome(string str,int n,int i){
    if(i>=n/2) return true;
    if(str[i]!=str[n-1-i]) return false ;
    return ispalindrome(str,n,i+1);
}



int main(){
string str="racecar";
int size=str.length();
cout<<ispalindrome(str,size,0);

return 0;

}

