#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vector {

private:
	double x, y, x1, y1, r, x2, y2;
	char c;

public:
	double Getx()
	{
		return this->x;
	}
	double Gety()
	{
		return this->y;
	}
	void module()
	{
		cout << "Enter coordinates " << endl;
		cin >> x >> y;
		cout << std::endl;

		cout << "Enter coordinates " << endl;
		cin >> x >> y;
		cout << endl;
		r = sqrt(pow(x, 2) + pow(y, 2));

		cout << "The modulus of your vector is :" << r << endl;
		cout << "\n";
	}
	void Vecplus()
	{
		cout << "Enter fitst vector " << endl;
		cin >> x1 >> y1;
		cout << "Enter second vector " << endl;
		cin >> x2 >> y2;
		cout << " Enter operation : (+ , - )" << endl;
		cin >> c;
		switch (c) {
		case '+':
			x = x1 + x2;
			y = y1 + y2;
			break;
		case '-':
			x = x2 - x1;
			y = y2 - y1;
			break;
		default: cout << "Error ";

		}
		cout << " Vector = : " << "(" << x << "," << y << ")" << "\n";
	}
	Vector  operator=(Vector right)
	{

		this->x = right.x;
		this->y = right.y;
		return *this;
	}
	bool operator==(Vector right) {
		return this->x == right.x && this->y == right.y;

	}
	bool operator<(Vector vector) {
		return this->x < vector.x && this->y < vector.y;
	}

	bool operator<=(Vector vector) {
		return this->x <= vector.x && this->y <= vector.y;
	}

	bool operator>=(Vector vector) {
		return this->x >= vector.x && this->y >= vector.x;
	}

	bool operator!=(Vector vector) {
		return this->x != vector.x && this->y != vector.y;
	}
	friend ostream& operator<<(ostream &out, const Vector &c) {
		out << "The coordinate: " << c.x <<  c.y << endl;
		return out;
	}

	friend istream& operator>>(istream &in, Vector &c) {
		in >> c.x >> c.y;
		return in;
	}

	bool operator>(Vector vector)
	{
		return this->Getx() > vector.Getx() && this->Gety() > vector.Gety();
	}


};