/*
 * Dreieick.h
 *
 *  Created on: 30 Jun 2021
 *      Author: hanna
 */

#ifndef DREIECK_H_
#define DREIECK_H_

class Form{
	public:
			//defining enumeration type Colortype
			enum Colortype{RED, GREEN, BLUE};//mint egy child ez az enum Colortype klasse a Form klasse-n belül!!!
			double color;
			//defining a few variables of enumeration type
			Form();
			//parametrisierter Constructor
			Form(double _color);//emiatt így is megadhatom a színt, egy számmal - az enum Colortype-ban is végül egy számot kap, bár színt adok meg!!!
			virtual ~Form(); //da es eine virtual Methode in der Klasse gibt
			Form(const Form& other);

			void SetColor(double _color);
			double GetColor();
			void SetSize(double _size);
			double GetSize();

			//double GetArea();
			virtual double GetArea() = 0;
	private:
			double size;
};




#endif /* DREIECK_H_*/
