#include <bits/stdc++.h>
using namespace std;

int A, B, C, a, b, N, cnt[101];
int main() {
    cin >> A >> B >> C;
    for(int i = 0; i < 3; i++) {
        cin >> a >> b;
        for(int j = a; j < b; j++) {
            cnt[j]++;
        }
    }

    for(int j = 1; j < 100; j++) {
        if(cnt[j]) {
            if(cnt[j] == 1) N += A;
            else if(cnt[j] == 2) N += B * 2;
            else if(cnt[j] == 3) N += C * 3;
        }
    }
    cout << N << "\n";
    return 0;
}