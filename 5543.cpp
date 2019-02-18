#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int temp = 0;
	vector<int> H_arr;
	vector<int> J_arr;
	
	for (int i = 0; i < 5; i++) {
		cin >> temp;
		if (i < 3)
			H_arr.push_back(temp);
		else
			J_arr.push_back(temp);
	}
	sort(H_arr.begin(), H_arr.end());
	sort(J_arr.begin(), J_arr.end());

	cout << H_arr[0] + J_arr[0] - 50 << endl;
	return 0;
}