#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr1[] = {1, 2, 3, 2, 1};
    int arr2[] = {1, 2, 3, 4, 5};
    
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    cout << isPalindrome(arr1, n1) << endl; 
    cout << isPalindrome(arr2, n2) << endl;
    
    return 0;
}