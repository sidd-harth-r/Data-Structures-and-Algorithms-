// brute force approach  

#include<iostream>  
#include<climits>
using namespace std ;

void Buy_sell_stocks(int *arr, int n){     // brute force
       int maxProfit=INT_MIN;
    for(int start=0;start<n;start++){
       
        for(int end =start+1;end<n;end++){
             int dif=0;
             dif=arr[end]-arr[start];

            
            maxProfit=max(dif,maxProfit);

        }
    }
    cout<<" the maximun profit possible is : "<<maxProfit<<endl;
    }

    void  Buy_sell_stocks2(int *arr, int n){     // optimized
        int bestbuy[100000];    // Size declared acc to the constraints given in the leetcode question 
         bestbuy[0]=INT_MAX;    // int bestbuy[n;  dynamic declaration inside function is not allowed in cpp

         for(int i=1;i<n;i++){
            bestbuy[i]=min(bestbuy[i-1],arr[i-1]);
         }
          int maxProfit=0;
          int profit =0;
          for(int i=0;i<n;i++){
            profit=arr[i]-bestbuy[i];
            maxProfit=max(profit,maxProfit);
            
          }
           cout<<" the maximun profit possible is : "<<maxProfit<<endl;
    }
    




int main(){
int prices[]={7,1,5,3,6,4};
int n = sizeof(prices)/sizeof(int) ;
Buy_sell_stocks2(prices,n);
return 0;

}
