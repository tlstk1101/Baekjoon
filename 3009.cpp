#include <iostream>

using namespace std;

int main() {
	int X_axis[4] = { 0, };
	int Y_axis[4] = { 0, };
	int indexX = 3;
	int indexY = 3;

	for (int i = 0; i < 3; i++) {
		cin >> X_axis[i] >> Y_axis[i];
	}

	for (int i = 1; i < 3; i++) {
		if (X_axis[0] != X_axis[i])
			indexX -= i;
		if (Y_axis[0] != Y_axis[i])
			indexY -= i;
	}

	if (indexX != 0)
		X_axis[3] = X_axis[3 - indexX];
	else
		X_axis[3] = X_axis[0];

	if (indexY != 0)
		Y_axis[3] = Y_axis[3 - indexY];
	else
		Y_axis[3] = Y_axis[0];

	cout << X_axis[3] << " " << Y_axis[3];
	return 0;
}

/*
	�迭 0���� �ʱⰪ���� �Ͽ� ���� ��ǥ�� �ִ��� �������� ã�´�.
	1. ���� ��ǥ�� �ִ� ���
		- ���� ���� ������ �ε����� �迭���� ����
	2. ���� ��ǥ�� ���� ���
		- �迭 0���� ���� ���� 
*/