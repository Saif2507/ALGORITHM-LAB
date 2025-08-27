//Given an array of integers nums and a target value target, return the indices of the two numbers that add up to the target.

#include <iostream>
using namespace std;

int main() {
    int n,nums[100],target;
    cout << "Enter the array of size: ";
    cin >> n;

    cout <<"Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter target value: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
                return 0;
            } } }

    cout << "two numbers add up to target." << endl;
}

