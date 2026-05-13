#include <iostream>
using namespace std;

void findMissing(int arr[], int n) {

    int min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    
    
    cout << "Missing numbers: ";
    for (int num = min; num <= max; num++) {
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == num) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << num << " ";
        }
    }
}

int main() {
    int arr[] = {1, 2, 4, 6, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    findMissing(arr, n);
    
    return 0;
}