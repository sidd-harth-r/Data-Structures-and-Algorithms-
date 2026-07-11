// class User{
//     public :
   
//     vector<pair<int,int>>tweets;  // time, tweetId
//     unordered_set<int>following;

// };

// class Twitter {
// public:

//     unordered_map<int,User>m;
//     int time;
//     Twitter() {
//      time =0;
//     }
    
//     void postTweet(int userId, int tweetId) {
//         m[userId].tweets.push_back(make_pair(time++,tweetId));
//        }
       
    
    
//     vector<int> getNewsFeed(int userId) {
        
//       priority_queue<pair<int ,int>>pq(m[userId].tweets.begin(),m[userId].tweets.end()); //maxheap in terms of time
//         for(auto it : m[userId].following){
//             for(auto t : m[it].tweets){
//                 pq.push(t);
//             }
//         }

//         vector<int>ans;

//         while(!pq.empty () && ans.size()<10 ){
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }
//         return ans;

//     }
    
//     void follow(int followerId, int followeeId) {
//         if (followerId == followeeId) return;
//         m[followerId].following.insert(followeeId);
//     }
    
//     void unfollow(int followerId, int followeeId) {
//          m[followerId].following.erase(followeeId);
//     }
// };