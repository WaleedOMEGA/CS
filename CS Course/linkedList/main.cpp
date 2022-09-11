#include <iostream>
using namespace std;

class Node{
public:
	int value;
	Node* next;
	Node(){
		value = 0;
		next = NULL;
	}
	Node(int val, Node* p){
		value = val;
		next = p;
	}
};

class LinkedList{
	Node* head;

public:
	LinkedList(){
		head = NULL;
	}

	void addToFirst(int value){
		Node* n = new Node();
		n->value = value;
		n->next = head;
		head = n;
	}

	void removeFromFirst(){
		if (head == NULL)return;

		head = head->next;
	}

	void addToLast(int value){
		if (head == NULL){
			addToFirst(value);
			return;
		}

		Node* n = new Node;
		n->value = value;
		n->next = nullptr;

		Node* p = head;
		while (p->next != NULL){
			p = p->next;
		}
		p->next = n;
	}

	void removeFromLast(){
		if (head == NULL) return;
		if (head->next == NULL){
			delete head;
			head = NULL;
			return;
		}

		Node* p = head;
		Node* parent = head;
		while (p->next != NULL){
			parent = p;
			p = p->next;
		}
		delete p;
		parent->next = NULL;
	}

	void print(){
		Node* p = head;
		while (p != NULL){
			cout << p->value << "->";
			p = p->next;
		}
		cout << "NULL" << endl;
	}
};

int main(){
	LinkedList myList;

	myList.addToFirst(5);
	myList.addToFirst(15);
	myList.addToFirst(50);
	myList.addToFirst(3);
	myList.print();
	myList.removeFromLast();
	myList.print();
	return 0;
}
