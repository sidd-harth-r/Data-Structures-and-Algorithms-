// class Solution {
// public:
//     vector<vector<int>> ans;

//     void f(vector<int>& a, vector<int>& temp, int target, int idx) {
//         if (target == 0) {
//             ans.push_back(temp);
//             return;
//         }

//         for (int i = idx; i < a.size(); i++) {
//             if (a[i] > target) break;  // pruning

//             temp.push_back(a[i]);
//             f(a, temp, target - a[i], i); // reuse same element
//             temp.pop_back();
//         }
//     }

//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         sort(candidates.begin(), candidates.end()); // important
//         vector<int> temp;
//         f(candidates, temp, target, 0);
//         return ans;
//     }
// };