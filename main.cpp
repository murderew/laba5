#include <iostream>
#include "complex.h"
#include "vector.h"

using namespace std;

int main()
{

	Vector ve_1;
	Vector ve_2;
	Complex com_1;
	Complex com_2;

	cout << "-------------Vectors-----------" << endl;
	ve_1.module();
	ve_1.Vecplus();
	cout << endl;
	ve_2.module();
	ve_2.Vecplus();
	cout << endl;
	cout << "-------------Complex's---------------" << endl;
	com_1.setcomplex();
	com_1.setcomplex();
	cout << endl;
	com_2.setcomplex();
	com_2.setcomplex();
	cout << endl;



	system("pause");
	return 0;
}