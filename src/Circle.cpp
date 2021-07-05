/*
 * Circle.cpp
 *
 *  Created on: 1 Jul 2021
 *      Author: hanna
 */

#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(double _color): Form(color){
	cout << "Objekt erzeugt" << endl;
	this->color = _color;
	//this->size = 0;	itt nem initializálhatom, mert privat az Elternklasseban!!!
	this->radius = 0;
}

Circle::Circle(): radius(0){}
Circle::~Circle(){
	cout << "Circle Destructor" << endl;
}

void Circle::SetRadius(int _radius){
	radius = _radius;
}
int	Circle::GetRadius(){
	return radius;
}

double Circle::GetArea(){
	double erg = 3.141529653*radius*radius;
	return erg;
}
