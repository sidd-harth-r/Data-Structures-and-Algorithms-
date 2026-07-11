#include<iostream>
#include<vector>
#include<algorithm>


using namespace std ;

bool compare(pair<int,double>p1,pair<int,double>p2){
    return p1.second>p2.second;
}

double knapsack(vector<int>&value,vector<int>&weight,int capacity){
    double maxValue=0.0;
    vector<pair<int,double>>ratio(value.size(),make_pair(0,0.0));
    for(int i=0;i<value.size();i++){
    ratio[i]=make_pair(i,(double)value[i]/weight[i]);
    }

    sort(ratio.begin(),ratio.end(),compare);
for(int i=0;i<ratio.size();i++){
    if(weight[ratio[i].first]<=capacity){
        maxValue+=value[ratio[i].first];
        capacity-=weight[ratio[i].first];
    }
    else {
        maxValue+=ratio[i].second*capacity;
        break;
    }
}

return maxValue;
}

int main(){
vector<int>value={100,60,120};
vector<int>weight={20,10,30};
int capacity=50;

cout<<knapsack(value,weight,capacity);
return 0;
}

