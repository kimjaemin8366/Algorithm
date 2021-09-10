#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
	int T, N, x, query;
	cin >> T;
	while (T > 0) {
		stack<int> minStack;
		stack<int> maxStack;

		minStack.push(1001);
		maxStack.push(0);
		cin >> N;

		for (int i = 1; i <= N; i++) {
			cin >> query;

			if (query == 1) {
				cin >> x;
				minStack.push(min(minStack.top(), x));
				maxStack.push(max(maxStack.top(), x));
				cout << minStack.top() << " " << maxStack.top() << "\n";
			}
			else {
				if (minStack.size() == 1) {
					continue;
				}
				minStack.pop();
				maxStack.pop();
			}
		}

		T--;
	}
}