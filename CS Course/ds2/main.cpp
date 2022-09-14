#include <iostream>

using namespace std;
template <class T>
class DivisionByZeroInCalculator;
template <class T>
class Calculator {
	T num1;
	T num2;
public:
	Calculator(T num1, T num2) {
		this->num1 = num1;
		this->num2 = num2;
		if (num2 == 0) {
			cout << "WARNING : YOU'LL NOT BE ABLE TO DIVIDE " << num1 << " by zero" << endl;
		}
	}
	void add() {
		cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
	}
	void subtract() {
		cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
	}
	void multiply() {
		cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
	}
	void divide() {
		if (num2 == 0)
			throw DivisionByZeroInCalculator<T>(num1);

		cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
	}
};
	template <class T>
class DivisionByZeroInCalculator : public exception {
	int num1;
public:

	DivisionByZeroInCalculator(T num1) {
		this->num1 = num1;
	}

	const char* what() const throw() {
		cout << "Can't divide " << num1;
		return " by zero";
	}
	T getNum1() {
		return num1;
	}
};

int main()
{
    try{
			Calculator<int> c1(5,10);  // 2 integers

			c1.add();
			c1.subtract();
			c1.multiply();
			c1.divide();
		}
		catch(DivisionByZeroInCalculator<int>& ex){
			cout << ex.what();
		}

		try{

			Calculator<float> c2(5.0,0);  // 2 floating point numbers

			c2.add();
			c2.subtract();
			c2.multiply();
			c2.divide();
		}
		catch(DivisionByZeroInCalculator<float>& ex){
			cout << ex.what();
		}



}
