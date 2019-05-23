#include<iostream>
#include<iomanip>
using namespace std;

class Person{
private:
	string nama;
	int usia;
	
public:
	Person();
	void setPerson(string, int);
	void print();
};

Person::Person() {
	nama="";
	usia=0;
}

void Person::setPerson(string n, int u){
	nama=n;
	usia=u;
}

void Person::print(){
	cout << nama << " " << usia << endl;
}

int main(){
	Person p;
	p.setPerson("Dhanu", 17);
	p.print();
}
