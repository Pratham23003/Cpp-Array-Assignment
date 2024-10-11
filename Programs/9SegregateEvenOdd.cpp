#include <iostream>
using namespace std;

int main() {
    int arr[100], evenArr[100], oddArr[100];
    int n, evenCount = 0, oddCount = 0;

    // Input size 
    cout << "Enter number of elements: ";
    cin >> n;

    // Input elements
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Segregate even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount++] = arr[i]; 
        } else {
            oddArr[oddCount++] = arr[i];
        }
    }

    // even numbers output
    cout << "Array after segregation: ";
    for (int i = 0; i < evenCount; i++) {
        cout << evenArr[i] << " ";
    }

    // odd output
    for (int i = 0; i < oddCount; i++) {
        cout << oddArr[i] << " ";
    }

    cout << endl;
    return 0;
}
