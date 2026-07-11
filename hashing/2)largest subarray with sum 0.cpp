// class Solution {
//   public:
//     int maxLength(vector<int>& arr) {
//        
//         unordered_map<int,int>m;
//         m[0]=-1;// prefix sum and index 
        
//         int prefix=0;
//         int largest=0;
//         for(int i=0;i<arr.size();i++){
//             prefix+=arr[i];
            
           
//             if (m.count(prefix)){
//                 largest=max(i-m[prefix],largest);
//             }
//            if(!m.count(prefix))m[prefix]=i;
//         }
//         return largest;
//     }
// };