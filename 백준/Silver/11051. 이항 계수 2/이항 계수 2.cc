#include<bits/stdc++.h>
using namespace std;

static int N, K;
static int A[1001][1001];

int main() {
    cin >> N >> K;
    for(int i = 0; i <= N; i++) {
        A[i][1] = i;
        A[i][0] = 1;
        A[i][i] = 1;
    }
    
    for(int i = 2; i <= N; i++) {
        for(int j = 1; j < i; j++) {
            A[i][j] = A[i - 1][j] + A[i - 1][j - 1];
            A[i][j] = A[i][j] % 10007;
        }
    }
    cout << A[N][K] << "\n";
}