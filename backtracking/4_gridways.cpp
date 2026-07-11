// time complexity O(2^(n+m) ) as we are taking choice at each step and are nearly moving through n+m cells 


#include<iostream>
using namespace std ;

int gridWays(int rows ,int cols,int i,int j,string ans){
   if(i==rows-1 && j==cols-1){
    cout<<ans<<endl;
    return 1;
   }

   if(i>=rows || j>=cols) return 0;
   int ways=0 ;

ways+=gridWays(rows, cols, i+1,j,ans+"D");
   
   
   ways+=gridWays(rows,cols,i,j+1,ans+"R");
   
return ways; 
}

int main(){
string ans ="";
    cout <<"total number of ways is:"<<gridWays(3,3,0,0,ans)<<endl;
return 0;
}