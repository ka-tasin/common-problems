#include <iostream>
#include <string>
using namespace std;

string rotateRight(string str, int k) {
    int n = str.length();
    k = k % n;  
    
    string result = "";
    
    
    for (int i = n - k; i < n; i++) {
        result += str[i];
    }
    
    
    for (int i = 0; i < n - k; i++) {
        result += str[i];
    }
    
    return result;
}

int main() {
    string input = "hello";
    int k = 2;
    
    cout << rotateRight(input, k) << endl;
    
    return 0;
}