#include <iostream>
using namespace std;
int main() {
    int arr[100]; 
    int n, element, position;

    // input size of array
    cout << "Enter number of elements: ";
    cin >> n;

    // elements input
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // input for element and its position to insert
    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position: ";
    cin >> position;

    // Shifting elements to the right
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Inserting element at given position
    arr[position] = element;

    // Incrementing the size of the array
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
