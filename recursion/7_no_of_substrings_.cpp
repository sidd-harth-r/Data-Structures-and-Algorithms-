// leetcode preminum 
//We are given a string S,we need to find the count of all contiguous substrings starting and ending with the same character

#include<iostream>
using namespace std ;

int no_of_substrings(string s){
    int n=s.length();
    if(n <= 1){
        return n;
    }
int count =0;

if(s[0]==s[n-1]) count ++;

count+= no_of_substrings(s.substr(0,n-1)) + no_of_substrings(s.substr(1)) ;
count-= no_of_substrings(s.substr(1,n-2)) ;

return count ;

}



int main(){

cout<<no_of_substrings("abcab");

    return 0;
}