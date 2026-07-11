// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int n=cardPoints.size();
//         int i=0;
//         int j=n-1;
//         int score=0;
//         int rsum=0;
//         int lsum=0;
    
//       for(int m=0;m<k;m++){
//         lsum+=cardPoints[i++];
//       }
//       i--;
//       score=lsum;
//       while(i>=0){
//       lsum-=cardPoints[i--];
//       rsum+=cardPoints[j--];
//       score=max(score,rsum+lsum);
//       }

//         return score;
//     }
// };