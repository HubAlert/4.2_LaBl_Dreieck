/*
 * Recktangle.h
 *
 *  Created on: 1 Jul 2021
 *      Author: hanna
 */

#ifndef RECKTANGLE_H_
#define RECKTANGLE_H_

#include "Dreieck.h"

class Rectangle: public Form{
	private:
		int width, height;
	public:
		void SetWidth(int _width);
		int GetWidth();

		void SetHeight(int _height);
		int GetHeight();

		double GetArea();
};



#endif /* RECKTANGLE_H_ */
