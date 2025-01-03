#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	pair<int, int> mt[100001];
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> mt[i].second >> mt[i].first;
	}

	sort(mt, mt + N);

	int cnt = 0;
	int load = 0; 
	
	for (int i = 0; i < N; i++) {
		if (mt[i].second >= load) {
			load = mt[i].first;
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}