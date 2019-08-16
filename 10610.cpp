#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

int main() {
	string N;
	int sum = 0;
	bool errCheck = true;
	vector<int> inArr;
	cin >> N;

	for (int i = 0; i < N.size(); i++) {
		inArr.push_back(N[i] - '0');
		
		if (inArr[i] % 10 == 0)
			errCheck = false;

		sum += inArr[i];
	}
	if (sum % 3 != 0)
		errCheck = true;

	if (errCheck)
		cout << -1 << endl;
	else
	{
		sort(inArr.begin(), inArr.end(), greater<int>());
		for (int i = 0; i < inArr.size(); i++) {
			cout << inArr[i];
		}
		cout << endl;
	}

	return 0;
}