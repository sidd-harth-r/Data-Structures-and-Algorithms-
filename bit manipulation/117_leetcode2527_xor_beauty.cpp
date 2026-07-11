// for optimal solution watch live recording 12 


#include<iostream> 
#include<vector> 
using namespace std ;

 int xorBeauty1(vector<int>& nums) {
        int xor_beauty=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                for(int k=0;k<nums.size();k++){
                    int effective_value=((nums[i] | nums[j]) &nums[k]);
                    xor_beauty=xor_beauty^effective_value;
                }
            }
        }
        return xor_beauty;
    }


int main(){

    vector<int>nums={15,45,20,2,34,35,5,44,32,30};
cout<<xorBeauty1(nums)<<endl;
return 0;

}
