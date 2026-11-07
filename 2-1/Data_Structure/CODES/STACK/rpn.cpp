// reverse polish notation

#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int RPN(vector<string> tokens)
{
    stack<int> st;

    for (string t : tokens)
    {
        if (t == "+" || t == "-" || t == "*" || t == "/")
        {
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            if (t == "+")
                st.push(a + b);
            if (t == "-")
                st.push(a - b);
            if (t == "*")
                st.push(a * b);
            if (t == "/")
                st.push(a / b);
        }
        else
            st.push(stoi(t));
    }

    return st.top();
}

int main()
{
    vector<string> tokens = {"3", "4", "5", "*", "+", "6", "-"};

    cout << RPN(tokens) << "\n";

    return 0;
}