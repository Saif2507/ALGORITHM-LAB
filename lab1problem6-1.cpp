
#include <iostream>
using namespace std;

int main() {
    int n,k=0,nums[100],result[100];
    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            result[k] = nums[i];
            k++;
        }
    }
    while (k < n) {
        result[k] = 0;
        k++;
    }
    cout << "Output: [";
    for (int i = 0; i < n; i++) {
        cout << result[i];
        if (i != n - 1) cout << ", ";
    }
    cout << "]" << endl;
}
