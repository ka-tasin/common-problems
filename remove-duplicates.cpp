#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string str) {
    string result = "";
    
    for (int i = 0; i < str.length(); i++) {
        bool found = false;
        for (int j = 0; j < result.length(); j++) {
            if (str[i] == result[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += str[i];
        }
    }
    
    return result;
}

int main() {
    string input = "hello world";
    cout << removeDuplicates(input) << endl;
    
    return 0;
}