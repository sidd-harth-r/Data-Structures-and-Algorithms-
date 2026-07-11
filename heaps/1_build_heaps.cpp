#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;

class Heap{
    vector<int>vec;

    public:

    void push(int value){

        vec.push_back(value);
        int childIdx=vec.size()-1;
        int parIdx=(childIdx-1)/2;

        while(parIdx>=0 && vec[childIdx]>vec[parIdx]){
            swap(vec[childIdx],vec[parIdx]);
            childIdx=parIdx;
            parIdx=(childIdx-1)/2;
           
        }

    }

    void heapify(int i){
        if(i>=vec.size()){
            return ;           // handles the case of no elements present in the vector
        }

        int left=2*i+1;
        int right=2*i+2;

        int maxIdx=i;
        if(left<vec.size()  && vec[maxIdx]<vec[left]){
            maxIdx=left;
        }
         if(right<vec.size()  && vec[maxIdx]<vec[right]){
            maxIdx=right;
        }

        swap(vec[i],vec[maxIdx]);
        if(maxIdx!=i){
            heapify(maxIdx);
        }

    }

    void pop(){
        swap(vec[0],vec[vec.size()-1]);
        vec.pop_back();
        heapify(0);
        
    }

    int top(){
      return vec[0];
    }

    bool empty(){
        return (vec.size()==0);
    }


};


int main(){
    Heap heap;
    heap.push(9);
    heap.push(4);
    heap.push(8);
    heap.push(1);
    heap.push(2);
    heap.push(5);

    while(!heap.empty()){
        cout<<"top= "<<heap.top()<<endl;
        heap.pop();
    }

    return 0;

}