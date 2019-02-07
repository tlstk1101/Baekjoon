#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

class My_Class {
private:
	int n;
	long long int *array;
public:
	void SetValue() {
		cin >> n;
		array = new long long int[n + 1];
		memset(array, 0, sizeof(long long int)* (n + 1));
	}

	void Solution() {
		array[1] = array[2] = 1;
		for (int i = 3; i <= n; i++) {
			array[i] = array[i - 1] + array[i - 2];
		}
	}

	void PrintResult() {
		cout << array[n] << endl;
	}
};

int main() {
	My_Class Mine;
	Mine.SetValue();
	Mine.Solution();
	Mine.PrintResult();
	return 0;
}