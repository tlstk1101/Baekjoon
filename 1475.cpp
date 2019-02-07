#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int number_set[10] = { 0, };
	int result = 0;
	string input;
	cin >> input;
	
	for (int i = 0; i < input.size(); i++) {
		number_set[input[i] - '0']++;
	} 
	for (int i = 0; i < 10; i++) {
		if (i != 6 && i != 9)
			result = max(result, number_set[i]);
	}

	cout << max(result, ((number_set[6] + number_set[9] + 1)/2)) << endl;
	return 0;
}

// 11 line : ���ڿ��� ���� ��ŭ ������ üũ
// 12 line : input�� char�� ���־ -48�� �ؼ� int �� ���ں�ȯ
// 15 line : number_set �迭 ���� ���� �ϳ��� ���� � ��Ʈ�� �ʿ����� ã�� ���� for��