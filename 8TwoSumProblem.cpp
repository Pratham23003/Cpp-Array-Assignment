#include <iostream>
using namespace std;

int main() {
    int nums[100];  // Declare array to store nums
    int n, target;

    // size of the array input
    cout << "Enter the number of elements: ";
    cin >> n;

    // Input array elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Input target sum
    cout << "Enter the target: ";
    cin >> target;

    // Finding two indices that add up to the target
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Indices: [" << i << ", " << j << "]" << endl;
                return 0;
            }
        }
    }
    // if pair not found
    cout << "No pair found." << endl;

    return 0;
}
