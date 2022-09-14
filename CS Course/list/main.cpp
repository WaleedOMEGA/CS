#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void showList(list <int> l) {
	list <int> ::iterator it;
	for (it = l.begin(); it != l.end(); ++it)
		cout << *it << " ";
	cout << endl;
}

int main() {
	list<int> myList;

	//filling list
	for (int i = 1; i <= 10; i++) {
		myList.push_back(i);
	}

	//add to first
	myList.push_front(50);
	myList.push_front(-50);
	myList.push_front(-500);

	//printing list
	showList(myList);

	//print first and last element
	cout << "First item: " << myList.front() << endl;
	cout << "Last item: " << myList.back() << endl;

	//delete first and last element
	myList.pop_front();
	myList.pop_back();
	cout << "After Delete: ";
	showList(myList);

	//reverse list
	myList.reverse();
	cout << "After Reversing: ";
	showList(myList);

	//sorting list
	myList.sort();
	cout << "After Sorting: ";
	showList(myList);

	cout<<myList.size();
}
