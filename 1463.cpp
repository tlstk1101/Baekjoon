#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

class Mine {
private:
	int n;
	int array[100000] = { 0, };
public:
	void SetNum() {
		cin >> n;
	}
	void Solution() {
		array[1] = 0;
		for (int i = 2; i <= n; i++) {
			array[i] = array[i - 1] + 1;
			if (i % 3 == 0)
				array[i] = min(array[i], array[i / 3] + 1);
			if (i % 2 == 0)
				array[i] = min(array[i], array[i / 2] + 1);
		}
	}
	void PrintNum() {
		cout << array[n];
	}
};

int main() {
	Mine problem;
	problem.SetNum();
	problem.Solution();
	problem.PrintNum();

	return 0;
}