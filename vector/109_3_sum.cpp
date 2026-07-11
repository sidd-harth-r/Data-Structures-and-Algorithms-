#include<iostream>  
#include<vector>
#include<algorithm>

using namespace std ;

vector<vector<int>> three_sum1(vector<int>&nums){
    vector<vector<int>>vec;
    for(int i=0;i<nums.size()-2;i++){
        for(int j=i+1;j<nums.size()-1;j++){
            for(int k=j+1;k<nums.size();k++){
if( nums[i]+nums[j]+nums[k]==0){
    vector<int>temp={nums [i],nums[j],nums[k]};
    sort(temp.begin(),temp.end());
                                                    // sets is to be used to sets to store uniue elements 
    
}
            }
        }
    }
}




 vector<vector<int>> threeSum2(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i!=0 && nums[i]==nums[i-1]){
              continue;
            }
            int left =i+1,right =nums.size()-1;
           
            
            while(left<right){
           
                    if(nums[i]+nums[left]+nums[right]==0){
                        ans.push_back({nums[i],nums[left],nums[right]});
                        left++;
                        right--;
                        while(left<right && nums[left]==nums[left-1]){
                            left++;
                        }
                         while(left<right && nums[right]==nums[right+1]){
                            right--;
                        }

                 
            }
            else if(nums[left]+nums[right]<-nums[i]){
                left++;

            }
            else {
               right--;
            }
            }
        }
        return ans;
    }



int main(){

return 0;

}
