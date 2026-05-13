#include <iostream>
using namespace std;

void moveZeros(int arr[], int n) {
    int j = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    moveZeros(arr, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}