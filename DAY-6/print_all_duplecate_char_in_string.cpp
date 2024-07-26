#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

string removeDuplicates(const string& str) {
    unordered_set<char> seen;
    string result;

    for (char c : str) {
        // If character hasn't been seen before, add it to the result and mark it as seen
        if (seen.find(c) == seen.end()) {
            result += c;
            seen.insert(c);
        }
    }
    return result;
}

int main() {
    string str = "geEksforGEeks";
    string result = removeDuplicates(str);
    cout << "Input: " << str << endl;
    cout << "Output: " << result << endl;  // Output: "geEksforG"
    return 0;
}
