/*
 * Point.cpp
 *
 *  Created on: Mar 19, 2016
 *      Author: Lichao
 */
#include "Point.h"

namespace pnt{
int abs(Point<unsigned int> &a,Point<unsigned int> &b){
	int x = a.x > b.x ? a.x - b.x : b.x - a.x;
	int y = a.y > b.y ? a.y - b.y : b.y - a.y;
	return x+y;
}
int dis(Point<unsigned int> &a,Point<unsigned int> &b){
	int x = a.x > b.x ? a.x - b.x : b.x - a.x;
	int y = a.y > b.y ? a.y - b.y : b.y - a.y;
	return x*x+y*y;
}

float abs(Point<float> &a,Point<float> &b){
	int x = a.x > b.x ? a.x - b.x : b.x - a.x;
	int y = a.y > b.y ? a.y - b.y : b.y - a.y;
	return x+y;
}
float dis(Point<float> &a,Point<float> &b){
	int x = a.x > b.x ? a.x - b.x : b.x - a.x;
	int y = a.y > b.y ? a.y - b.y : b.y - a.y;
	return x*x+y*y;
}
}
