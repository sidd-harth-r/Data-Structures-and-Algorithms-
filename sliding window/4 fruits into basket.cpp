// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         int l=0;
//         int r=0;
//          unordered_map<int,int>m;
//         int maxlen=0;
//         while(r<fruits.size()){
//           if (m.find(fruits[r])!=m.end() || m.size()<2){
//             m[fruits[r]]=r;
//           }
//           else {
//            pair<int,int>p1=make_pair(INT_MAX,INT_MAX);
//            for(auto it :m){
//               if(p1.second > it.second){
//                 p1.first=it.first;
//                 p1.second=it.second;
//               }

//            }
//            l=p1.second+1;
//            m.erase(p1.first);
//             m[fruits[r]]=r;

//           }
//           maxlen=max(maxlen,r-l+1);
//           r++;
//         }
//         return maxlen;
//     }
// };