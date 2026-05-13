#include <iostream>
using namespace std;

void rotateRight(int arr[], int n, int k) {
    k = k % n;
    int temp[n];
    
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    
    rotateRight(arr, n, k);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}