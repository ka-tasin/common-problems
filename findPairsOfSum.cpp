#include <iostream>
using namespace std;

void findPairs(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }
}

int main() {
    int arr[] = {1, 5, 7, -1, 5, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    
    findPairs(arr, n, target);
    
    return 0;
}