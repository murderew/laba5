
#include <iostream>
#include <string>

using namespace std;

class Complex {
private:

	double c1, c2;
	double x, y;

public:
	double Getc1()
	{
		return this->c1;
	}
	double Getc2()
	{
		return this->c2;
	}

	void setcomplex() {
		cout << "Enter real  :" << endl;
		cin >> c1;
		cout << "Enter imaginary part :" << endl;
		cin >> c2;
		x = sqrt(pow(c1, 2) + pow(c2, 2));
		y = atan(c2 / c1);
		cout << "Your module " << x << endl;
		cout << "argument " << y << ";";
		cout << "\n";
	}
	Complex operator++()
	{
		this->c1++;
		this->c2++;
		return  *this;
	}
	Complex operator--()
	{
		this->y--;
		this->x--;
		return *this;
	}
	Complex  operator=(Complex right)
	{

		this->c1 = right.c1;
		this->c2 = right.c2;
		return *this;
	}
	bool operator==(Complex right) {
		return this->c1 == right.c1 && this->c2 == right.c2;

	}
	bool operator<(Complex complex) {
		return this->c1 < complex.c1 && this->c2 < complex.c2;
	}

	bool operator<=(Complex complex) {
		return this->c1 <= complex.c1 && this->c2 <= complex.c2;
	}

	bool operator>=(Complex complex) {
		return this->c1 >= complex.c1 && this->c2 >= complex.c2;
	}

	bool operator!=(Complex complex) {
		return this->c1 != complex.c1 && this->c2 != complex.c2;
	}
	friend ostream& operator<<(ostream &out, const Complex &c) {
		out << "The real part: " << c.c1 << " , The Complex part : " << c.c2 << endl;
		return out;
	}

	friend istream& operator>>(istream &in, Complex &c) {
		in >> c.c1 >> c.c2;
		return in;
	}

	bool operator>(Complex complex) 
	{
		return this->Getc1() > complex.Getc1() && this->Getc2() > complex.Getc2();
	}

};