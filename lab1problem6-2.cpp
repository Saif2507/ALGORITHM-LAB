//Given an array of n + 1 integers where each integer is between 1 and n (inclusive),find the duplicate number.

#include <iostream>
using namespace std;

int main() {
    int n,nums[100],duplicate = -1;
    cout << "Enter n array will have n+1 elements: ";
    cin >> n;

    cout << "Enter " << n+1 << " numbers : ";
    for (int i = 0; i < n+1; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < n+1; i++) {
        for (int j = i+1; j < n+1; j++) {
            if (nums[i] == nums[j]) {
                duplicate = nums[i];
                break;
            }
        }
        if (duplicate != -1) break;
    }
    if (duplicate != -1)
        cout << "Duplicate number is: "<< duplicate << endl;
    else
        cout << "No duplicate found."<< endl;

}

