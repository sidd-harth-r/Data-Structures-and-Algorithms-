// lc 

#include<iostream>  
#include<algorithm>
using namespace std ;

int majority_element1(int arr[],int n){ 
    sort(arr,arr+n);
    return arr[n/2];

    }


int majority_element2(int arr[],int n){    // boyer moore voting algorithm 
    int majority =0;
    int lead =0;
    for(int i=0;i<n;i++){
        if(arr[i]==majority){
            lead++;

        }
        else if(lead>0){
            lead--;
        }
        else {
            majority=arr[i];
            lead++;
        }
    }
    return majority;
}


int main(){

return 0;

}
