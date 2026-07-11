// class Solution {
// public:
//     int leastInterval(vector<char>& tasks, int n) {
//         unordered_map<char,int>m;
//         int maxFreq=0;
//         for(int i=0;i<tasks.size();i++){
//            m[tasks[i]]++;
//            maxFreq=max(maxFreq,m[tasks[i]]);
//         }

//         int ans=(maxFreq-1)*(n+1);
//         for(auto it : m){
//             if(it.second==maxFreq) ans++;
//         }
//         int size=tasks.size();
//         return max(ans,size);
    
//     }
// };