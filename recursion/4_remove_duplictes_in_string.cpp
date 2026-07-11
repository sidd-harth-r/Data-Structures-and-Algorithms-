#include<iostream>  
#include<string>
#include<vector>

using namespace std ;

string removeDuplicates(string s){
    
        string str="";
        for(int i=0;i<s.length();i++){
            if(str.find(s[i])== string::npos) {
                
            str.push_back(s[i]);
            }
        }
       return str;
    
}
string removeDuplicates2(string s,string str,int i, vector<bool>& count){
    if(i==s.length()) return str;

    if(count[s[i]-'a']==false ) {
        str=str+s[i];
        count[s[i]-'a']=true;
    }
       return removeDuplicates2(s,str,i+1,count);
    
}




int main(){
  vector<bool>count(26,false);
    cout<<removeDuplicates2("appnnacollege","",0,count);

return 0;

}
