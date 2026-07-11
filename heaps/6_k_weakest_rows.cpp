// class rows{
//     public : 
//     int index;
//     int soldiers;

//     rows(int index,int soldiers){
//         this->index=index;
//         this->soldiers=soldiers;
//     }
//     bool operator <(const rows &other) const{
//         if(this->soldiers==other.soldiers){
//             return this->index > other.index;
//         }
//         return this->soldiers > other.soldiers;
//     }
// };


// class Solution {
// public:
//     vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
//         vector<rows>v;
//         for(int i=0;i<mat.size();i++){
//             int count=0;
//             for(int j=0;j<mat[0].size() && mat[i][j]==1;j++){
//                 count++;
//             }
//             v.push_back(rows(i,count));
//         }

//         vector<int>result;

//         priority_queue<rows>pq(v.begin(),v.end());
//         for(int i=0;i<k;i++){
//             result.push_back(pq.top().index);
//             pq.pop();
//         }

//         return result;

        
//     }
// };