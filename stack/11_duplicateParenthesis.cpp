#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool duplicateParenthesis(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] !=')' )
        {
            st.push(s[i]);
        }

        else
        {
         

            if(st.top()=='(')  return true;
             while( st.top()!='('){
                st.pop();
             }
             st.pop();
        }
    }

   
        return false;
  
}

int main()
{
    string s;

    cout << "enter the expression : ";
    getline(cin, s);

    cout<<duplicateParenthesis(s);
}
