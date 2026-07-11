#include<iostream>
#include<queue>

using namespace std ;

struct comparePair{
    bool operator () (pair<string,int>&p1,pair<string,int>&p2)
    {
      return p1.second < p2.second ;   
    }
};

int main(){
    priority_queue<pair<string,int>,vector<pair<string ,int>>,comparePair>pq;
    pq.push(make_pair("aman",500));
    pq.push(make_pair("ben",200));
    pq.push(make_pair("charles",1000));

    while(!pq.empty()){
        cout<<"top = "<<pq.top().first<<","<<pq.top().second<<endl;
        pq.pop();
    }

    return 0;

}