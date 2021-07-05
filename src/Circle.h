/*
 * Circle.h
 *
 *  Created on: 1 Jul 2021
 *      Author: hanna
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Dreieck.h"

class Circle: public Form{
	private:
		int radius;
	public:
		Circle();
		Circle(double _color);

		~Circle();
		void SetRadius(int _radius);
		int GetRadius();

		double GetArea() override;
};



#endif /* CIRCLE_H_ */
