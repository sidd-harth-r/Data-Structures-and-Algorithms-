#include<iostream>
#include<vector>
#include<unordered_map>


using namespace std ;

bool isAnagram(string s1 ,string s2){
    if(s1.size()!=s2.size())  return false;
    unordered_map<char,int>m;
    for(int i=0;i<s1.size();i++){
        m[s1[i]-'a']++;
    }

    for(int i=0;i<s2.size();i++){
        if(m.count(s2[i]-'a')==0){
            return false;
        }
        else{
            m[s2[i]-'a']--;
            if(m[s2[i]-'a']==0 ) {
                m.erase(s2[i]-'a');
            }
        }
    }
    return true;
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<int>>v;
        int i=0;
        if(strs.size()==1){
            v[i].push_back(strs[0]);
            return v;
        }
        int count =0;
        while(count!=strs.size()){
            int idx=flag;
            int j=idx;
            int j=flag+1;

            while(j!=strs.size()){
                if(idx==strs.size()-1){
                    v.push_back(strs[idx]);
                    return v;
                }

                if(isAnagram(strs[idx],strs[j])){
                    v[i].push_back(strs[j++]);
                    count++;
                }

                else if(flag==0){
                    flag=j++;
                }

                else {
                    j++;
                }
            }
            v[i].push_back(strs[idx]);
            count++;
            i++;
        }
        return v;
    }


int main(){
    cout<<isAnagram("eat","tec");
}