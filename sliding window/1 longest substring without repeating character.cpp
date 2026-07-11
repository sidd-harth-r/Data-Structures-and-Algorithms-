// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_map<char,int>m;
//         int l=0;
//         int r=0;
//         int maxlen=0;
//         while(r<s.size()){
//             if(m.find(s[r])!=m.end()){
//                l=max(m[s[r]]+1,l);
//             }
//               maxlen=max(maxlen,r-l+1);  
//               m[s[r]]=r;
//               r++;
//         }
//         return maxlen;
//     }
// };