// class Solution {
// public:
//     string minWindow(string s, string t) {
//         int l=0,r=0;
//         unordered_map<char,int>m;

//         for(int i=0;i<t.size();i++){
//                 m[t[i]]++;
//         }
//         int cnt=0;
//         int len=INT_MAX;
//         int idx=-1;
//         while(r<s.size()){
//           if(m[s[r]]>0)cnt++;
//           m[s[r]]--;
//           while(cnt==t.size()){
//             if(r-l+1 < len){
//                 len=r-l+1;
//                 idx=l;
//             }
//             m[s[l]]++;
//             if(m[s[l]]>0)cnt--;
//             l++;
//           }
//           r++;
//         }
//         if (idx ==-1) return "";
//         return s.substr(idx,len);
//     }
// };