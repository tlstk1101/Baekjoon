#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N;
	int temp = 0;
	queue<int> q;

	cin >> N;
	for (int i = 1; i <= N; i++)
		q.push(i);
	
	while (q.size() > 1 && q.size() != 1) {
		q.pop();
		temp = q.front();
		q.pop();
		q.push(temp);
	}

	cout << q.front() << endl;

	return 0;
}

/*
1일때의 여부만 생각한다면 문제 그대로임
*/