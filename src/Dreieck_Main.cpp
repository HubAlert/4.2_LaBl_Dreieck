/*
 * Dreieck_Main.cpp
 *
 *  Created on: 30 Jun 2021
 *      Author: hanna
 */

#include <iostream>
#include "Dreieck.h"
#include "Circle.h"
#include "Recktangle.h"
#include "Triangle.h"

using namespace std;

int main() {
/*
	Circle kreis;

	//int _radius = 8;
	kreis.SetRadius(8);
	//kreis.color(2);
	kreis.color = 2;
*/
	Circle *kreis = new Circle();

	kreis->SetRadius(8);
	kreis->color = 2;

	double korvolumen = kreis->GetArea();
	cout << korvolumen << endl;

	Rectangle teglalap;

	teglalap.color = Form::Colortype::BLUE;

	//int _height = 8;
	teglalap.SetHeight(8);
	//int _width = 8;
	teglalap.SetWidth(8);

	double teglalapvolumen = teglalap.GetArea();
	cout << teglalapvolumen << endl;

	Triangle haromszog;
	//int _base = 8;
	haromszog.SetBase(8);
	int _heightharomszog = 8;
	haromszog.SetHeight(_heightharomszog);

	double haromszogvolumen = haromszog.GetArea();
	cout << haromszogvolumen << endl;

	delete kreis;
	kreis = nullptr;

	return 0;
}
