// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int j;
//         for (int i = 0; i < gas.size(); i++) {
//             if (gas[i] < cost[i])
//                 continue;
//             int count = 0;
//             int idx=i;
//             j = i;
//             long long tank = 0;
//             while (count != gas.size()) {
//                 if (j == gas.size()) {
//                     j = 0;
//                 }
//                 tank += gas[j] - cost[j];
//                 if (tank < 0)
//                     break;
//                 count++;

//                 j++;
//             }
//             if (count == gas.size())
//                 return idx;
//         }
//         return -1;
//     }
// };