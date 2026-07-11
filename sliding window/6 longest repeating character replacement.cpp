// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int l=0;
//         int r=0;
//         int maxfreq=0;
//         unordered_map<char,int>m;
//         int maxlen=0;
//         while(r<s.size()){
//             m[s[r]]++;
//             maxfreq=max(maxfreq,m[s[r]]);
//             if((r-l+1)-maxfreq  > k){
//                 m[s[l]]--;
//                 if(m[s[l]]==0)m.erase(s[l]);
//                 maxfreq=0;
//                 for(auto it : m){
//                     maxfreq=max(it.second,maxfreq);
//                 }
//                 l++;
//             }

//         if((r-l+1)-maxfreq <= k){
//            maxlen=max(maxlen,r-l+1); 
//         }
//          r++;
//         }
//         return maxlen;
//     }
// };