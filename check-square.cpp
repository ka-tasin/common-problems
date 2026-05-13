#include <iostream>
using namespace std;

bool isPerfectSquare(int num) {
    if (num < 0) return false;
    if (num == 0 || num == 1) return true;
    
    int left = 1, right = num;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long square = (long long)mid * mid;
        
        if (square == num) {
            return true;
        } else if (square < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return false;
}

int main() {
    cout << isPerfectSquare(16) << endl;  
    
    return 0;
}