// first non repeating character in a stream of characters

#include<iostream>
#include<queue>
#include<string>

using namespace std ;

void first_non_repeating_character(string str){
    queue<char>q;
    int freq[26]={0};

    for(int i=0;i<str.size();i++){
       
        freq[str[i]-'a']++;
        q.push(str[i]);
       while(!q.empty()  && freq[q.front()-'a']!=1){
        q.pop();
       }
       if(q.empty())  cout<<"-1 ";
      else cout<<q.front()<<" ";

    }
}

int main(){
    string str="aabccxb";
    first_non_repeating_character(str);
    return 0;
}

