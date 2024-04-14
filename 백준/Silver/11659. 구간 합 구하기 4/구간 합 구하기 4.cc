#include<bits/stdc++.h>
using namespace std;
#define MAX 100001

int N, M;
int arr[MAX];

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin >> N >> M;

    for(int i = 0; i < N; i++)
        cin >> arr[i];
    
    for(int i = 1; i <= N; i++)
        arr[i] += arr[i - 1];

    for(int i = 0; i < M; i++) {
        int x, y;
        cin >> x>> y;

        cout << arr[y - 1] - arr[x - 2] << "\n";
    }
}