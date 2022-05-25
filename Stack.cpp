#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
	
	node(int value)
	{
		data = value;
		next = NULL;
	}
};

int main()
{
	node *head = new node(1);
	head->next = new node(2);
	head->next->next = new node(3);
	
	head->next->next->next = head;

	return 0;
}