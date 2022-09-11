#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;

	//filling vector
	for (int i = 1; i <= 10; i++) {
		v.push_back(i);
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	// removes the last element
	v.pop_back();
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	// inserts 100 at the beginning
	v.insert(v.begin(), 100);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	// removes the first element
	v.erase(v.begin());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	// Delete all the vector items
	v.clear();
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "\nVector size after erase(): " << v.size() <<endl;

	//check empty
	if (v.empty() == true)
		cout << "v is empty\n";
	else
		cout << "v is not empty\n";

	// fill the array with 10 five times
	v.assign(5, 10);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	//check empty
	if (v.empty() == true)
		cout << "v is empty\n";
	else
		cout << "v is not empty\n";
}
