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

// 11 line : 문자열의 길이 만큼 돌려서 체크
// 12 line : input에 char로 들어가있어서 -48을 해서 int 형 숫자변환
// 15 line : number_set 배열 값을 토대로 하나씩 꺼내 몇개 셋트가 필요한지 찾기 위한 for문