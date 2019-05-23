#include<iostream>
#include<iomanip>
using namespace std;

class Person{
private:
	string nama;
	int usia, tinggi;
	double berat;
	
public:
	Person();
	void setPerson(string, int, int, double);
	void print();
};

Person::Person() {
	nama="";
	usia=tinggi=0;
	berat=0.0;
}

void Person::setPerson(string n, int u, int t, double b){
	nama=n;
	usia=u;
	tinggi=t;
	berat=b;
}

void Person::print(){
	cout << "Nama: " << nama << " " << usia << " " << tinggi << " " << berat << endl;
}

int main(){
	Person p;
	p.setPerson("Dhanu", 17, 165, 75);
	p.print();
}
