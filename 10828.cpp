#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int stack_pointer = 0;

typedef struct _node{
	int data;
	struct _node *next;
} node;

node *head, *tail;

void init_stack() {
	head = (node*)malloc(sizeof(node));
	tail = (node*)malloc(sizeof(node));
	head->next = tail;
	tail->next = tail;
}

int push(int data) {
	node *t;
	if ((t = (node*)malloc(sizeof(node))) == NULL)
		return -1;
	t->data = data;
	t->next = head->next;
	head->next = t;

	stack_pointer++;

	return data;
}

int pop() {
	node *t;
	int i;
	if (head->next == tail) {
		stack_pointer = 0;
		return -1;
	}
	t = head->next;
	i = t->data;
	head->next = t->next;
	stack_pointer--;
	free(t);

	return i;
}

int main() {
	string input;
	int test_number = 0;
	int key = 0;
	cin >> test_number;
	init_stack();

	for (int i = 0; i < test_number; i++) {
		cin >> input;
		if (input.compare("push") == 0) {
			cin >> key;
			push(key);
		}
		else if (input.compare("pop") == 0) {
			cout << pop() << endl;
		}
		else if (input.compare("top") == 0) {
			if(head->next != tail)
				cout << head->next->data << endl;
			else
				cout << -1 << endl;
		}
		else if (input.compare("size") == 0) {
			cout << stack_pointer << endl;
		}
		else if (input.compare("empty") == 0) {
			if (head->next != tail)
				cout << 0 << endl;
			else
				cout << 1 << endl;
		}
	}

	return 0;
}