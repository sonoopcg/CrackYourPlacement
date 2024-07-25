#include <bits/stdc++.h>
using namespace std;

int findMinDiff(vector<int>& A, int N, int M) {
    if (M == 0 || N == 0) return 0;
    
    sort(A.begin(), A.end());
    
    
    if (N < M) return -1;
    

    int minDiff = INT_MAX;
    
    for (int i = 0; i + M - 1 < N; ++i) {
        int diff = A[i + M - 1] - A[i];
        minDiff =min(minDiff, diff);
    }
    
    return minDiff;
}

int main() {
    vector<int> A = {3, 4, 1, 9, 56, 7, 9, 12};
    int N = A.size();
    int M = 5;

    int result = findMinDiff(A, N, M);
    if (result != -1)
        cout << "The minimum difference is " << result << endl;
    else
        cout << "Number of students is more than number of packets" << endl;

    return 0;
}
