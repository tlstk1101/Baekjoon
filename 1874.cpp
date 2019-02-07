#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
	int n;
	cin >> n;
	list<int> array;
	list<int> input_array;
	int temp = 0;
	vector<int> stack;

	for (int i = 1; i <= n; i++) {
		cin >> temp;
		input_array.push_back(temp);
		array.push_back(i);
	}

	while (true) {
		if (input_array.front() != array.front()) {
			stack.push_back(array.front());
			array.pop_front;
		}
	}
	return 0;
}