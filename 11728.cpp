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
cin, cout���� �Է��� �޾��� �� �ð� �ʰ� ���� �߻�
cin, cout�� ó���ӵ��� ������ ������ scanf�� ��ü�Ͽ���
*/