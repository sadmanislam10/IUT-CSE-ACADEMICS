#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s)
{
    stack<char> st;

    for (char current : s)
    {
        if (current == '(' || current == '{' || current == '[')
        {
            st.push(current);
        }

        else if (current == ')' || current == '}' || current == ']')
        {
            if (st.empty())
            {
                return false;
            }

            char Opening = st.top();
            st.pop();

            if ((current == ')' && Opening != '(') || (current == '}' && Opening != '{') || (current == ']' && Opening != '['))
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main()
{
    string s;

    getline(cin, s);

    cout << (isValid(s) ? "true" : "false");

    return 0;
}