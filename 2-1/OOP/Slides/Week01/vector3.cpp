#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector<int> v; // empty vector

    v.push_back(10); // add to the end
    v.push_back(20);
    v.push_back(30);

    cout << v[0] << "\n"; // prints the first element
    cout << v.size() << "\n";

    v.pop_back(); // deletes the last element
    cout << v.size() << "\n";


    return 0;
}

/*
Code	Meaning

vector<int> v;	empty vector
vector<int> v = {1, 2, 3};	create with values
vector<int> v(5, 0);	5 elements, all 0
v.push_back(x)	add x at the end
v.pop_back()	remove the last element
v.size()	number of elements
v.empty()	true if no elements
v[i]	access element at index i
v.at(i)	same, but throws an error if i is out of range
v.clear()	remove everything
*/



