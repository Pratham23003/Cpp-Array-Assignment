#include <iostream>
using namespace std;

int main() {
    int arr[100]; 
    int n;

    // Input no. of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Input elements 
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize max and min with first element
    int max = arr[0];
    int min = arr[0];

    // Finding maximum and minimum elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max
        }
        if (arr[i] < min) {
            min = arr[i]; // Update min
        }
    }
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}
