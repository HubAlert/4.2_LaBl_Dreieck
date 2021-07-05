/*
 * Triangle.h
 *
 *  Created on: 1 Jul 2021
 *      Author: hanna
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Dreieck.h"

class Triangle: public Form{
	private:
		int base, height;
	public:
		void SetBase(int _base);
		int GetBase();

		void SetHeight(int _height);
		int GetHeight();

		double GetArea();
};



#endif /* TRIANGLE_H_ */
