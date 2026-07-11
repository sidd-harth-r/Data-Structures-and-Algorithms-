#include<iostream>
#include<vector>

using namespace std ;

void matrix_multiplication(vector<vector<int>>&a,vector<vector<int>>&b,vector<vector<int>>&ans){

    if(a[0].size()!=b.size()){
        cout<<" inavlid \n";
        return ;
    }

    for(int i=0;i<a.size();i++){
        for(int j=0;j<b[0].size();j++){
            for(int k=0;k<a[0].size();k++){
                ans[i][j]+=a[i][k]*b[k][j];
            }
        }

    }
}

void print(vector<vector<int>>arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<"\n";
    }
}


int main(){
    vector<vector<int>>arr1={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>>arr2={{1,2,3},{4,5,6},{12,11,10}};
    vector<vector<int>>ans(arr1.size(),vector<int>(arr2[0].size()));

    matrix_multiplication(arr1,arr2,ans);
    print(ans);
    return 0;



}