#include <bits/stdc++.h>

using namespace std;

int top = -1;

void push(int stack[], int x, int n)
{
    if (top == n - 1)
    {
        cout << "Stack is full. Overflow\n";
    }
    else
    {
        top = top + 1;
        stack[top] = x;
    }
}

bool isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty. Underflow\n";
    }
    else
    {
        top = top - 1;
    }
}

int topElement(int stack[])
{
    if (isEmpty())
    {
        return -1;
    }
    return stack[top];
}

int size()
{
    return top + 1;
}

void printStack(int arr[])
{
    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[4];

    push(arr, 10, 4);
    push(arr, 20, 4);
    push(arr, 30, 4);
    push(arr, 40, 4);

    printStack(arr);

    pop();
    printStack(arr);

    int topEl = topElement(arr);
    int s = size();

    cout << "Top  element : " << topEl << "\nSize is : " << s << endl;

    return 0;
}

