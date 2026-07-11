// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& arr, int target) {
//         int s=0;
//         int m=arr.size();
//         int n=arr[0].size();
//         int e=(n*m)-1;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(arr[mid/n][mid%n]==target) return true ;
//             else if(arr[mid/n][mid%n] < target ){
//                 s=mid+1;
//             }
//             else {
//                 e=mid-1;
//             }
//         }
//         return false;
//     }
// };