#include <iostream>
using namespace std;

int main() {
    int arr[100]; 
    int n;

    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    // Input elements of array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    for (int i = 0; i < n / 2; i++) {
        // Swapping elements
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }

    return 0;
}
