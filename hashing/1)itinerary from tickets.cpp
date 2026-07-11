#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>

using namespace std ;

vector<string> itinerary(vector<vector<string>>&v){
  vector<string>ans ;
  unordered_map<string,string>m;
  unordered_set<string>s;
  for(int i=0;i<v.size();i++){
    m[v[i][0]]=v[i][1];
  }
  for (auto it : m){
    s.insert(it.second);
  }
   string start;
  for(auto it : m){
    if(s.find(it.first)==s.end()){
   start =it.first;
   break;
    }
  }
  ans.push_back(start);

   while(m.count(start)){
    ans.push_back(m[start]);
    start=m[start];
   }
   
   return ans ;

}


int main(){
  vector<vector<string>>v={ {"Chennai", "Bangalore"},
        {"Bombay", "Delhi"},
        {"Goa", "Chennai"},
        {"Delhi", "Goa"}};

       vector<string>ans= itinerary(v);

       for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" -> ";
       }
       return 0;
}