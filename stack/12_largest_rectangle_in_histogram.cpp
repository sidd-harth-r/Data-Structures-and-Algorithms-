#include<iostream>
#include<vector>
#include<stack>
#include<climits>

using namespace std ;


 int largestRectangleArea1(vector<int>& heights) {
        int maxi=INT_MIN;

         for(int i=0;i<heights.size();i++){
            int left=i-1;
            int right=i+1;
            long long count=1;
            while(left>=0  && heights[left]>=heights[i]){
                left--;
              count++;

            }

            while(right<heights.size()  && heights[right]>=heights[i]){
             count++;
             right++;
            }

            int area=heights[i]*count;
            maxi=max(maxi,area);
         }
       
    return maxi;
        
    }

   

    void nextSmallerleft(vector<int>&heights,vector<int>&nsl){
        stack<int>s;
        nsl[0]=-1;
        s.push(0);
        for(int i=1;i<heights.size();i++){
          while(!s.empty() && heights[i]<=heights[s.top()]){
            s.pop();
          }
       
          if(s.empty()){
            nsl[i]=(-1);
          }
          else{
          nsl[i]=(s.top());
          }
           s.push(i);
        }

    }

    void nextSmallerright(vector<int>&heights,vector<int>&nsr){
  stack<int>s;
        nsr[heights.size()-1]=heights.size();
        s.push(heights.size()-1);
        for(int i=heights.size()-2;i>=0;i--){
          while(!s.empty() && heights[i]<=heights[s.top()]){
            s.pop();
          }
       
          if(s.empty()){
            nsr[i]=(heights.size());
          }
          else{
          nsr[i]=(s.top());
          }
           s.push(i);
        }
    }

    int largestRectangleArea2(vector<int>& heights) {
        int maxArea=INT_MIN;
        vector<int>nsl(heights.size(),0);
        vector<int>nsr(heights.size(),0);

        nextSmallerleft(heights,nsl);
        nextSmallerright(heights,nsr);

        for(int i=0;i<heights.size();i++){
            int area=heights[i]*(nsr[i]-nsl[i]-1);
            maxArea=max(maxArea,area);
            
        }
        return maxArea;
    }
        

    int main (){
        vector<int>v={2,1,5,6,2,3};
        cout<<largestRectangleArea2(v);

    }