#include <iostream>
using namespace std;

int main()
{

    int t1, t2, t3;
    cout << "enter the 3 test marks" << endl;
    cin >> t1 >> t2 >> t3;
    float avg = (float)(t1 + t2 + t3) / 3;
    cout << "the average of three marks is : " << avg;
    return 0;
}