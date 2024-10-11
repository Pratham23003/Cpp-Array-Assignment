#include <iostream>
using namespace std;
int main() {
    int arr[100];
    int n;

    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Input elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize the largest and second largest
    int largest = arr[0];
    int secondLargest = -1;

    // Find the largest and second largest elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; 
            largest = arr[i]; 
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; 
        }
    }

    if (secondLargest != -1) {
        cout << "Second largest element: " << secondLargest << endl;
    } else {
        cout << "There is no second largest element." << endl;
    }

    return 0;
}
