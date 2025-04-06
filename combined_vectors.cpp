#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

stack<int>s_num;
queue<int>q_num;
int num;

int main() {
    cout << "Enter the size of array: "; // this is the size of the array
    // let say both the stack and queue will have the same size
    cin >> num;
    vector<int> stack_v(num);
    vector<int> queue_v(num);

    cout << "[Stack] Enter a number: ";
        for (int i = 0; i < num; i++) {
            cin >> stack_v[i];
            s_num.push(stack_v[i]);
    }
    cout << "[Queue] Enter a number: ";
        for (int i = 0; i < num; i++) {
            cin >> queue_v[i];
            q_num.push(queue_v[i]);
    }
    cout << "Stack: ";
    stack<int> s_numcopy = s_num; // temporary copy for the stack
    while (!s_numcopy.empty()) {
        cout << s_numcopy.top() << " ";
        s_numcopy.pop();
    }
    cout << endl;
    cout << "Queue: ";
    queue<int> q_numcopy = q_num; // temporary copy for the queue
    while (!q_numcopy.empty()) {
        cout << q_numcopy.front() << " ";
        q_numcopy.pop();
    }
    cout << endl;

    vector<int> combined_v; // combines both of the stack and queue
    while (!s_num.empty() && !q_num.empty()) {
        combined_v.push_back(s_num.top());
        s_num.pop();
        combined_v.push_back(q_num.front());
        q_num.pop();
    }
    cout << "Combined: ";
    for (int i = 0; i < combined_v.size(); i++) {
        cout << combined_v[i] << " ";
    }
    cout << endl;
    return 0;
}