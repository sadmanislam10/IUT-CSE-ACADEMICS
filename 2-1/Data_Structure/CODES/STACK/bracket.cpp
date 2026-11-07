#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isBalanced(string s)
{
    stack<char> st;

    // char c; // cant declare it here

    for (char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }

        else if (c == ')' || c == ']' || c == '}')
        {
            if (st.empty())
            {
                return false;
            }

            char o = st.top();
            st.pop();

            if ((c == ')' && o != '(') || (c == ']' && o != '[') || (c == '}' && o != '{'))
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();  
    
    // remove the newline after t // to remove the Enter buffer
    // else it will add in getline and terminate it


    while (t--)
    {
        string s;

        getline(cin, s);

        cout << (isBalanced(s) ? "YES" : "NO") << "\n";
    }

    return 0;
}