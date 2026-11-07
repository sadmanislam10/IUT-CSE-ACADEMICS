#include <bits/stdc++.h>

using namespace std;

int top = -1;

void push(int stack[], int x, int n)
{
    if (top == n - 1)
    {
        cout << "Stack is full. Overflow!\n";
    }
    else
    {
        top = top + 1;
        stack[top] = x;
    }
}

int main()
{
    int stack[3];

    push(stack, 10, 3);
    push(stack, 20, 3);
    push(stack, 30, 3);
    push(stack, 40, 3); // eikhane overflow so eta print hoye jabe

    for (int i = 0; i <= top; i++) // index zero theke start to first element is print hobe 10
    {
        cout << stack[i] << "\n";
    }

    return 0;
}