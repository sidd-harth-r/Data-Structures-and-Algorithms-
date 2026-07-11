// minimum number of moves required to solve tower ofhanoi is (2^n) -1
#include<iostream>
using namespace std;

int towerOfHanoi(int n,string source ,string helper ,string destination ){
    if(n==1){
        cout<<"Move "<<n<<" from "<<source<<" to "<<destination<<endl;
        return 1;
    }
int moves=0;
     moves+=  towerOfHanoi( n-1, source , destination,helper); 

 cout<<"Move "<<n<<" from "<<source<<" to "<<destination<<endl;
 moves++;

    moves+=    towerOfHanoi( n-1, helper, source,destination);
 
    return moves ;

}

int main(){
cout<<"\nThe number moves required to solve is :"<<towerOfHanoi(3,"S","H","D");
    return 0;
}
