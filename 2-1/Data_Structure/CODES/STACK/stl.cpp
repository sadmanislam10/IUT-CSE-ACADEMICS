#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> myStack;
    myStack.push(13);
    myStack.push(21);
    myStack.push(10);

    cout << "Top: " << myStack.top() << endl;

    myStack.pop();

    cout << "Top: " << myStack.top() << endl;

    cout << "Size: " << myStack.size() << endl;

    return 0;
}