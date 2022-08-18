#include <iostream>

using namespace std;

int main() {
		int arr[3][3];
		int sum = 0;
		cout << "Input elements in matrix1: \n";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i < 3;i++){
			int sum = 0;
			cout << "Sum of row number " << i + 1 << " = ";
			for (int j = 0; j < 3; j++){
				sum += arr[i][j];
			}
			cout << sum << endl;
		}
		return 0;
	}
