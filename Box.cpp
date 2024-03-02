//2023111359 최가윤
//Box.cpp
#include <iostream>
#include "Box.h"
using namespace std;

Box::Box(double h, double l, double w, bool s) { height = h; length = l; width = w; space = s; }
Box::Box() { height = 5.0; length = 6.0; width = 7.0; space = true; }
void Box::setHeight(double h) { height = h; }
void Box::setLength(double l) { length = l; }
void Box::setWidth(double w) { width = w; }
void Box::print() { cout << "부피는 : " << height * length * width << endl; }
/*double Box::getHeight() { return height; }
double Box::getLengthj() { return length; }
double Box::getWidth() { return width; }*/
double Box::getVolume() { return height * length * width; }