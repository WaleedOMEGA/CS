#include <iostream>

using namespace std;
class Auther
{
private:
	string name;
	string email;
	char gender;

public:
    Auther(){
		name = " ";
		email = " ";
		gender = '0';
	}
	Auther(string n, string e, char g){
		name = n;
		email = e;
		gender = g;
	}
	void setName(string n){
		name = n;
	}
	void setEmail(string e){
		email = e;
	}
	void setGender(char g){
		gender = g;
	}
	string getName(){
		return name;
	}
	string getEmail(){
		return email;
	}
	char getGender(){
		return gender;
	}
};

class Book{
private:
	string name;
	double price;
	int qty = 0;
	Auther auther;

public:
	Book(string n, double p, Auther a, int q){
		name = n;
		price = p;
		auther = a;
		qty = q;
	}
	void setName(string n){
		name = n;
	}
	void setPrice(double p){
		price = p;
	}
	void setQty(int q){
		qty = q;
	}
	void setAuther(Auther a){
		auther = a;
	}
	string getName(){
		return name;
	}
	double getPrice() {
		return price;
	}
	int getQty() {
		return qty;
	}
	Auther getAuther() {
		return auther;
	}

};

int main()
{
   Auther w("WALEED OMEGA", "waleedomega@hotmail.com", 'M');
	Book bo("Web Coding", 150, w, 3);
	cout << "Book Name : " << bo.getName() << endl;
	cout << "Price : " << bo.getPrice() << endl;
	cout << "Quantity : " << bo.getQty() << endl;
	cout << "Auther Name : " << bo.getAuther().getName() << endl;
	cout << "Auther Email : " << bo.getAuther().getEmail() << endl;
	cout << "Auther Gender : " << bo.getAuther().getGender()<< endl;
    return 0;
}
