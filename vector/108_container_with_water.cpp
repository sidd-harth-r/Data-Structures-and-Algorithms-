#include<iostream>
#include<vector>

using  namespace std ;

int Max_area1(vector<int>&arr){
    int maxArea=0;
for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
        int area =1;
        area=min(arr[i],arr[j])*(j-i);
        maxArea=max(maxArea,area);
    }
}
return maxArea;
}

int Max_area2(vector<int>&arr){
    int maxArea=0;

int left=0;
int right =arr.size()-1;

while(left<right){
    int area=1;
    area=min(arr[left],arr[right])*(right-left);    // since only the min height is controlling the area well br shifting the smaller value 
                                           
    maxArea=max(maxArea,area);
    if(arr[left]<arr[right]){
        left++;
    }
    else{
        right --;
    }

}
return maxArea;
}



int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
  cout<<Max_area2(height)<<endl;
}


