#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

pair<int, string> directory[50000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, A, B;
	string s;

	while (T > 0) {
		for (int i = 2; i <= N; i++) {
			cin >> A >> B;
			Node* temp = new Node(B);
			temp->setparent(A);
		}

		for (int i = 2; i <= N; i++) {

		}


		T--;
	}
} 
