#include <stdio.h>
#include <list>

using namespace std;

int main() {
	list<int> result;
	int n, m, temp;
	
	scanf_s("%d%d", &n, &m);

	int *Arr = new int[n + m];

	for (int i = 0; i < n + m; i++) {
		scanf_s("%d", &temp);
		result.push_back(temp);
	}
	result.sort();
	copy(result.begin(), result.end(), Arr);

	for (int i = 0; i < n + m; i++)
		printf("%d ", Arr[i]);

	return 0;
}

/* 
cin, cout으로 입력을 받았을 때 시간 초과 오류 발생
cin, cout이 처리속도가 느리기 때문에 scanf로 대체하였음
*/