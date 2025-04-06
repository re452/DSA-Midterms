#include <iostream>
#include <queue>
#include <vector>
using namespace std;

queue<int> q_num;
int num;
int main() {
    cout << "Enter the size of array: ";
    cin >> num;
    vector<int> q_vector(num);
    cout << "Enter a number: ";
    for (int i = 0; i < num; i++) {
        cin >> q_vector[i];
        q_num.push(q_vector[i]); // pushes the input numbers into the queue
    }
    cout << "Queue: ";
    while(!q_num.empty()) {
        cout << q_num.front() << " ";
        q_num.pop(); // pops the numbers from the queue
    }
    cout << endl;
    return 0;
}