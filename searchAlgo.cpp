#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void printArray(const vector<int>& v) {
    cout << "Sorted Array: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int linearSearch(const vector<int>& v, int target, int& ctr) {
    ctr = 0;
    for (int i = 0; i < v.size(); i++) {
        ctr++;
        if (v[i] == target) {
        return i;
        }
    }
    return -1;
}

int binarySearch(const vector<int>& v, int target, int& ctr) {
    ctr = 0;
    int left = 0;
    int right = v.size() - 1;

    while (left <= right) {
        ctr++;
        int mid = left + (right - left) / 2;

        if (v[mid] == target) {
            return mid;
        } else if (v[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int jumpSearch(const vector<int>& v, int x, int& ctr) {
    ctr = 0;
    int n = v.size();
    int step = sqrt(n);
    int prev = 0;

    while (v[min(step, n) - 1] < x) {
        ctr++;
        prev = step;
        step += sqrt(n);
        if (prev >= n) {
            return -1;
        }
    }

    for (int i = prev; i < min(step, n); i++) {
        ctr++;
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

int interpolationSearch(const vector<int>& v, int key, int& ctr) {
    ctr = 0;
    int low = 0;
    int high = v.size() - 1;

    while (low <= high && key >= v[low] && key <= v[high]) {
        ctr++;
        if (low == high) {
            if (v[low] == key) return low;
            return -1;
        }

        int pos = low + ((double)(high - low) / (v[high] - v[low]) * (key - v[low])); //uses a formula in this case

        if (v[pos] == key) {
            return pos;
        }

        if (v[pos] < key) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    return -1;
}

// amount of times the algo would perform is based on the ctr itself
/* int main() {
    int num;
    cout << "Enter the size of array: ";
    cin >> num;
    vector<int> v(num);
    cout << "Enter elements: ";
    for (int i = 0; i < num; i++) {
        cin >> v[i];
    }
    
    int target;
    cout << "Which element would you like to search for?:  ";
    cin >> target;
    int ctr; */
    // then print array yadda. This set of code is based on my previous lab activity