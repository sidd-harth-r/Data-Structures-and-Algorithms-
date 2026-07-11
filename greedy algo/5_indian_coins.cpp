// note that this method works for well defined coin systems .
// for it to be true for all coin systems we must be using dp approach


#include<iostream>
#include<vector>
using namespace std ;

 int coinChange(vector<int>& coins, int amount) {
       
        int count=0;
        for(int i=coins.size()-1;i>=0;i--){
           if(coins[i]<=amount) {
            count+=amount/coins[i];
            amount-=coins[i]*(amount/coins[i]);
           }
           if(amount==0) break;
        }
        return count;
    }


int main(){
vector<int>coins={1,2,5,10,20,50,100,500,2000};
int amount=590;

cout<<coinChange(coins,amount);
return 0;

}