#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int Solve(int N, vector<int> A) {
	// find the smallest number
	sort(A.begin(), A.end());
	int closest_element = A[0];

		return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	vector<int> A(N);
	for (int a_i = 0; a_i < N; ++a_i) {
		cin >> A[a_i];
	}
	int out = Solve(N, A);
	cout << out << "\n";
}