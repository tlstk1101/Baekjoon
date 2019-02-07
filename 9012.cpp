#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct _node {
	char key;
	struct _node *next;
}node;

node *head, *tail;

void init_stack() {
	head = (node*)malloc(sizeof(node));
	tail = (node*)malloc(sizeof(node));
	head->next = tail;
	tail->next = tail;
}

int push(char data) {
	node *temp;
	if ((temp = (node*)malloc(sizeof(node))) == NULL)
		return -1;
	temp->key = data;
	temp->next = head->next;
	head->next = temp;

	return 0;
}

int pop() {
	node *temp;
	if (head->next == tail)
		return -1;
	temp = head->next;
	head->next = temp->next;
	free(temp);

	return 0;
}

void clear_stack() {
	node *t, *s;
	t = head->next;
	while (t != tail) {
		s = t;
		t = t->next;
		free(s);
	}
	head->next = tail;
}

int main() {
	char input[50] = { 0, };
	int test_case = 0;
	init_stack();
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		int count = 0;
		cin >> input;
		while(input[count] != '\0'){
			if (input[count] == '(')
				push('(');
			else {
				if (head->next != tail)
					pop();
				else {					
					break;
				}
			}
			count++;
		}
		if (count != strlen(input) || head->next != tail) {
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
		clear_stack();
	}
	return 0;
}