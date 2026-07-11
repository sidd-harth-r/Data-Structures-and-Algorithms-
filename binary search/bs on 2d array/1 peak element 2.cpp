// class Solution {
// public:
//    int maxElement(vector<vector<int>>&nums,int mid){
//     int x=INT_MIN;
//     int idx=-1;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i][mid]>x){
//             x=nums[i][mid];
//             idx=i;
//         }
//     }
//     return idx;
//    }
    
//     vector<int> findPeakGrid(vector<vector<int>>& mat) {
//        int s=0;
//        int e=mat[0].size()-1;
//          while(s<=e){
//             int mid=s+(e-s)/2;
//             int row=maxElement(mat,mid);
//             int left = (mid -1) >= 0 ? mat[row][mid-1] : -1;
//             int right = (mid +1) < mat[0].size() ? mat[row][mid+1] : -1;
//             if(mat[row][mid]> left && mat[row][mid]> right){
//                 return {row,mid};
//             }
//             else if(left > mat[row][mid]){
//                 e=mid-1;
//             }
//             else {
//                 s=mid+1;
//             }
//          }
//          return {-1,-1};
//     }
// };