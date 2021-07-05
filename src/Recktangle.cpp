/*
 * Recktangle.cpp
 *
 *  Created on: 1 Jul 2021
 *      Author: hanna
 */

#include "Recktangle.h"



void Rectangle::SetWidth(int _width){
	width = _width;
}
int	Rectangle::GetWidth(){
	return width;
}

void Rectangle::SetHeight(int _height){
	height = _height;
}
int Rectangle::GetHeight(){
	return height;
}

double Rectangle::GetArea(){
	double ergebnis = height*width;
	return ergebnis;
}
