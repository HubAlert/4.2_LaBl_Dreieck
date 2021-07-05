/*
 * Triangle.cpp
 *
 *  Created on: 1 Jul 2021
 *      Author: hanna
 */

#include "Triangle.h"


void Triangle::SetBase(int _base){
	base = _base;
}
int	Triangle::GetBase(){
	return base;
}

void Triangle::SetHeight(int _height){
	height = _height;
}
int Triangle::GetHeight(){
	return height;
}

double Triangle::GetArea(){
			double ergebnis = (base*height)/2;
			return ergebnis;
		}
