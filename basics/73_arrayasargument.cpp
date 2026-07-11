// in cpp array name can be converted into a pointer 
// arrays are always passed by reference to the function hence whatever change done in array inside the functon is reflected in the actual array
//ti is important to note that passing array name to function is equivalent to passing a pointer which pointing to the first location of the array
//syntax 1 and syntax 2 both can be used 



#include<iostream>
using namespace std ;

// void func(int arr[]){                // syntax 1
//   arr[0]=1000;
// }
 
//     void func2(int *ptr){       // syntax 2
//         ptr[0]=1000;
//     }

void printArr(int nums[] ,int n){         // this nums points to the same locstion as that of arr
    // int n=sizeof(nums)/sizeof(int);  doing does not give the size of the array as nums is also poiter it returns the size of the pointer 
   // it always array size must also be passed while passing array to a function 


    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    // func(arr); //it is important to note that passing array name to function is equivalent to passing a pointer 
    // func2(arr);
    printArr(arr,n);

// cout<<arr[0]<<endl;


}