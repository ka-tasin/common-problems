#include <iostream>
#include <string>
using namespace std;

string reverseWords(string str) {
    string result = "";
    string word = "";
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (word != "") {
                if (result == "")
                    result = word;
                else
                    result = word + " " + result;
                word = "";
            }
        } else {
            word += str[i];
        }
    }
    
    return result;
}

int main() {
    string input = "Hello World";
    cout << reverseWords(input);
    return 0;
}