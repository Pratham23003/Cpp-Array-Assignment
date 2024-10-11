#include<iostream>
using namespace std;
int main() {
    int arr[100]; 
    int n, element, position;

    // Input no. of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Input elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input element to delete
    cout << "Enter element to delete: ";
    cin >> element;

    // Find position of the element to delete
    position = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            position = i;
            break; // Exit loop
        }
    }

    // Delete element if found
    if (position != -1) {
        // Shift elements to the left
        for (int i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease the size
    } 
    //Element not found output
    else {
        cout << "Element not found." << endl;
    }

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }

    return 0;
}
