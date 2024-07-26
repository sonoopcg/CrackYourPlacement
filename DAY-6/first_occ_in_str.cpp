#include <bits/stdc++.h>
using namespace std;
using namespace std;

int strStr(const string& haystack, const string& needle) {
    int haystackLen = haystack.length();
    int needleLen = needle.length();
    if (needleLen == 0) return 0;
    if (needleLen > haystackLen) return -1;

    
    for (int i = 0; i <= haystackLen - needleLen; ++i) {
        if (haystack.substr(i, needleLen) == needle) {
            return i;
        }
    }

    return -1;
}

int main() {
    string haystack1 = "sadbutsad";
    string needle1 = "sad";
    cout << strStr(haystack1, needle1) << endl; 

   
    return 0;
}
