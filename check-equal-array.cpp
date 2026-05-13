#include <iostream>
using namespace std;

bool areEqual(int arr1[], int n1, int arr2[], int n2) {
    if (n1 != n2) return false;
    
    bool visited[n2] = {false};
    
    for (int i = 0; i < n1; i++) {
        bool found = false;
        for (int j = 0; j < n2; j++) {
            if (!visited[j] && arr1[i] == arr2[j]) {
                visited[j] = true;
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    
    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {4, 3, 2, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    if (areEqual(arr1, n1, arr2, n2))
        cout << "Equal";
    else
        cout << "Not Equal";
    
    return 0;
}