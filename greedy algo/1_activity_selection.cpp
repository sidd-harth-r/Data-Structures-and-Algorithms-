#include <iostream>
#include <vector>

using namespace std;

int activity_selection(vector<int> start, vector<int> end)
{
    int n = 1;
    int currend = end[0];

    for (int i = 1; i < start.size(); i++)
    {
        if (start[i] >= currend)
        {
            n++;
            currend=end[i];
        }
    }

    return n;
}

int main(){
    vector<int>start={1,3,0,5,8,5};
    vector<int>end={2,4,6,7,9,9};

    cout<<activity_selection(start,end );
return 0;
}