#include<iostream>
#include<vector>

using namespace std ;
/*int sum=v[i];
  sum+=v[i-1];
  if(sum ==target){
    vec.push_back(i-1);
    vec.push_back(i);
    return vec;*/

vector<int> Pair_sum(vector<int>&v,int target){
   
    vector<int>vec;

    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            int sum=v[i];
  sum+=v[j];
  if(sum ==target){
    vec.push_back(i);
    vec.push_back(j);
    return vec;
            
        }


  }

}
return vec;
}


vector<int> Pair_sum2(vector<int>&numbers,int target){
   
      vector<int>vec;

  int start=0;
  int end =numbers.size()-1;
  while(start<end){
    int sum=numbers[start]+numbers[end] ;
    if(sum==target){
         vec.push_back(start+1);
         vec.push_back(end+1);
         return vec;
    }
    else if(sum>target){
        
        end--;
    }
    else {
        start++;
    }
  }

     return vec;   
  
}


int main(){
    vector<int>v={2,7,11,15};
    int target =9;
    vector<int>vec=Pair_sum(v,target);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}

