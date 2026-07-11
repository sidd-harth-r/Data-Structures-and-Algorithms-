// bool compare(pair<int,int>p1,pair<int,int>p2){
//     return p1.second<p2.second;
// }
// class Solution {
// public:

//     int findLongestChain(vector<vector<int>>& pairs) {
//         vector<pair<int,int>>p(pairs.size(),make_pair(0,0));
//       for(int i=0;i<pairs.size();i++){
//           p[i]=make_pair(pairs[i][0],pairs[i][1]);
//       }

//       sort(p.begin(),p.end(),compare);
//       int count =1;
//      int currsecond=p[0].second;
//       for(int i=1;i<pairs.size();i++){
//         if(p[i].first>currsecond){
//             count++;
//             currsecond=p[i].second;
//         }
//       }
//       return count;  
        
//     }
// };