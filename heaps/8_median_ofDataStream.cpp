// class MedianFinder {
// public:
//  vector<int>arr;
//  priority_queue<int>pq1;
//  priority_queue<int,vector<int>,greater<int>>pq2;

//     MedianFinder() {
     
//     }
    
//     void addNum(int num) {
//         arr.push_back(num);
//       if(pq1.size()==0  || pq1.top()>num)
//       {
//            pq1.push(num);
//       }
//       else pq2.push(num);
        
//        if(pq1.size()>pq2.size()+1){
//         pq2.push(pq1.top());
//         pq1.pop();
//     }
//     else if(pq1.size()<pq2.size()){
//         pq1.push(pq2.top());
//         pq2.pop();
//     }
//     }
    
//     double findMedian() {
//         int n=arr.size();
//         if(n%2==0){
//            int a =pq1.top();
//            int b=pq2.top();
//             return (double)(a+b)/2;
//         }
//         else return (double)pq1.top();
//     }
// };