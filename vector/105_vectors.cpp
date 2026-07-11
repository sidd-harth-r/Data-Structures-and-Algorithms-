#include<iostream>
#include<vector>

using namespace std ;

int main(){

    // vector<int>vec1;
    vector<int>vec={1,2,3,4};
    // vector<int>vec3(10,-1);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.push_back(5);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    // for(int i=0;i<vec3.size();i++){
    //     cout<<vec3[i]<<" ";
    // }
    return 0;

}