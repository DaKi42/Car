#include "Car.h" 
#include <iostream>
using namespace std;

Car::Car()
{
	model = nullptr;
	color = nullptr;
	year = 0;
	price = 0.0;
}

Car::Car(const char* m, const char* c, int y, double pr)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);

	this->color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);

	this->year = y;
	this->price = pr;
}

Car::~Car()
{
	delete[]model;
	delete[]color;
}

void Car::input()
{
	char buff[100];

	cout << "Enter model: ";
	cin.getline(buff, sizeof(buff));

	if (model != nullptr) {
		cout << "Deleted " << model << " model" << endl;
		delete[]model;
	}

	this->model = new char[strlen(buff) + 1];
	strcpy_s(this->model, strlen(buff) + 1, buff);

	cout << "Enter color: ";
	cin.getline(buff, sizeof(buff));

	if (color != nullptr) {
		cout << "Deleted " << color << " color" << endl;
		delete[]color;
	}

	this->color = new char[strlen(buff) + 1];
	strcpy_s(color, strlen(buff) + 1, buff);

	cout << "Enter year: ";
	cin >> this->year;

	cout << "Enter price: ";
	cin >> this->price;

}

void Car::print()
{
	cout << this->model << " // " << this->color << " color // " << this->year << " // price:  " << this->price << endl;
}

char* Car::getModel()
{

	return this->model;
}

char* Car::getColor()
{
	return this->color;
}

int Car::getYear()
{
	return this->year;
}

double Car::getPrice()
{
	return this->price;
}

void Car::setModel(const char* m)
{
	if (model != nullptr) {
		cout << "Deleted " << model << " model" << endl;
		delete[]model;
	}
	this->model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}

void Car::setColor(const char* c)
{
	if (color != nullptr) {
		cout << "Deleted " << color << " color" << endl;
		delete[]color;
	}
	this->color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
}

void Car::setYear(int y)
{
	if (year <= 2023 && year >= 1970) {
		this->year = y;
	}
	else {
		cout << "Invalid year" << endl;
	}

}

void Car::setPrice(double pr)
{
	if (price > 0) {
		this->price = pr;
	}
	else {
		cout << "Use numbers > 0" << endl;
	}
}