#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector <int> Vector;
	int i;
	for (i = 50; i > 0; i--) {
		Vector.push_back(i);
	}
	sort(Vector.begin(), Vector.end());
	reverse(Vector.begin(), Vector.end());
	for (i = 0; i < 50; i++) {
		cout << Vector.at(i) << endl;
	}
	return 0;
}