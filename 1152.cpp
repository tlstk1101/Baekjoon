#include <iostream>
#include <stdio.h>
#include <string.h>

#define MAX 1000000

using namespace std;

int main() {
	int count = 0;
	char str[MAX] = { 0, };
	scanf("%[^\n]", str);	

	char *ptr = strtok(str, " ");
	while (ptr != NULL){              
		ptr = strtok(NULL, " ");     
		count++;
	}
	printf("%d", count);

	return 0;
}
