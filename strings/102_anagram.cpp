#include<iostream>
#include<string>

using namespace std ;

bool Valid_Anagram(string str1,string str2){
    int count[26]={0};
    if(str1.length()!=str2.length()){
        return false ;
        }
       
    
    for(int i=0;i<str1.length();i++){
        count[(str1[i]-'a')]++;
        count[(str2[i]-'a')]--;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            return false ;
        }
    }
return true ;
}


int main(){

    string str1= "anagram", str2 = "nagaram";
    cout<<Valid_Anagram(str1, str2);

return 0;

}