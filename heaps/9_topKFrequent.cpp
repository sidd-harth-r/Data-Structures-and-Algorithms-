// class Word{
//     public : 
//     int freq;
//     string word;
//     Word(string word ,int freq){
//         this->freq=freq;
//         this->word=word;
//     }
//     bool operator < (const Word &obj)const{
        
//         if(this->freq !=obj.freq) return this-> freq > obj.freq;
//         else  return this->word < obj.word;
//     }
    
// };
// class Solution {
// public:
//     vector<string> topKFrequent(vector<string>& words, int k) {
//       unordered_map<string,int>m;
//       for(int i=0;i<words.size();i++){
//         m[words[i]]++;
//       }
//       priority_queue<Word>pq;
//     for(auto &it : m){
//   pq.push(Word(it.first,it.second));
//   if(pq.size()>k) pq.pop();
//     }
//  vector<string>ans(k);
//  int i=k-1;
//     while(!pq.empty()){
//   ans[i--]=pq.top().word;
//   pq.pop();
//     }
//      return ans ;
//     }
// };