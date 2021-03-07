#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int Solve(int N, vector<int> A) {
	// find the smallest number
	if(A.size() == 0) {
		return 0;
	}
	else if(A.size() == 1) {
		return A[0];
	}
	else {
		sort(A.begin(), A.end());
		int closest = A[0];

		for(auto i: A) {
			if (abs(i) <= abs(closest)) {
				closest = A[i];
			}
		}

		return closest;
	}
}

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	for (int a_i = 0; a_i < N; ++a_i) {
		cin >> A[a_i];
	}
	int out = Solve(N, A);
	cout << out << "\n";
}