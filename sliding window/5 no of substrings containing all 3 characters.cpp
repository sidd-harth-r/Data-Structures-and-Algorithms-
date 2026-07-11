// class Solution {
// public:
//     int numberOfSubstrings(string s) {
//         int r = 0, l = 0;
//         int n = s.size();
//         int count = 0;
//         unordered_map<char, int> m;

//         while (r < n) {
//             m[s[r]]++;

//             while (m.size() == 3) {
//                 count += n - r;

//                 m[s[l]]--;
//                 if (m[s[l]] == 0) m.erase(s[l]);

//                 l++;
//             }

//             r++;
//         }
//         return count;
//     }
// };