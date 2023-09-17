#include <iostream>
#include "Car.h"
using namespace std;

int main() {

	Car mycar("Ferrari Enzo", "Red", 2023, 27777);
	char* model = mycar.getModel();
	cout << model << endl;
	mycar.setColor("Black");
	char* color = mycar.getColor();
	cout << color << endl;
	mycar.print();
	mycar.input();
	mycar.print();
}