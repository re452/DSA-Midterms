#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<int> s_num;
int num;
int main() {
    cout << "Enter the size of array: ";
    cin >> num;
    vector<int> s_vector(num);
    cout << "Enter a number: ";
    for (int i = 0; i < num; i++) {
        cin >> s_vector[i];
        s_num.push(s_vector[i]); // pushes the input numbers into the stack
    }
    cout << "Stack: ";
    while(!s_num.empty()) {
        cout << s_num.top() << " ";
        s_num.pop(); // pops the numbers from the stack
    }
    cout << endl;
    return 0;
} 