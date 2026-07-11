// class Solution {
// public:

//  class Point{
//     public : 
//     int idx;
//     int distSq;
//     Point(int idx ,int distSq){
//         this->idx=idx;
//         this->distSq=distSq;
//     }
//     bool operator < (const Point&p1) const{
//         return this->distSq > p1.distSq;
//     }
//  };

//   int distance(vector<int>&v){
//     return v[0]*v[0]+v[1]*v[1];
//   }
//     vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
//        vector<Point>p;
//         for(int i=0;i<points.size();i++){
//             p.push_back(Point(i,distance(points[i])));
//         }
//   priority_queue<Point>pq(p.begin(),p.end());
//         vector<vector<int>>result;
//         for(int i=0;i<k;i++){
//             result.push_back(points[pq.top().idx]);
//             pq.pop();
//         }
//         return result;
//     }
// };