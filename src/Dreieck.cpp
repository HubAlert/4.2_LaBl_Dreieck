/*
 * Dreieck.cpp
 *
 *  Created on: 30 Jun 2021
 *      Author: hanna
 */
/*Schauen Sie sich die Folien zu der Vererbung an (Kapitel 8). Auf Folie 4 ist
die Klasse Form gegeben und drei Spezialisierungen der geometrischen Formen
: Rechteck, Dreieck und Kreis.
(a) Vervollständigen Sie das Programm, indem Sie diese drei geometrischen
Formen von der Basisklasse Form ableiten. Verwenden Sie zur Instanziierung
der abgeleiteten Objekte Rechteck und Kreis die statische oder
dynamische Objektverwaltung.
 */
#include "Dreieck.h"
//#include "Circle.h"
//#include "Recktangle.h"
//#include "Triangle.h"
#include <iostream>

using namespace std;

Form::Form(double _color){
	this->color = _color;
	this->size = 0;
}

Form::Form(){
	this->color = 0;
	this->size = 0;
}

Form::~Form(){
	cout << "Objekt geloescht" << endl;
}

Form::Form(const Form& other): color(other.color), size(other.size){
	cout << "Copy Constructor" << endl;
}

void Form::SetColor(double _color){
	this->color = _color;
}

double Form::GetColor(){
	cout << "get Color" << endl;
	return color;
}

void Form::SetSize(double _size){
	size = _size;
}

double Form::GetSize(){
	return size;
}
//Platzhalter-Funktion
/*double Form::GetArea(){
	return 0;
}
*/

/*enum Colortype{RED, GREEN, BLUE};
			Colortype color;
			//defining a few variables of enumeration type
			Form();
			//parametrisierter Constructor
			Form(Colortype color);
			~Form();
			Form(const Form& other);

			void SetColor(Colortype color);
			Colortype GetColor();
			void SetSize(double _size);
			double GetSize();
			*/


