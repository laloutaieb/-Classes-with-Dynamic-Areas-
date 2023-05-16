#pragma once
#include "Point.h"
class Polygon
{
private: 
	Point * poly; // liste des point 
 	int np; // nombre de point 
public:
	Polygon();//Empty ctor
	Polygon(int);//Two parameter ctor
	Polygon(const Polygon& V);
	~Polygon(); 
	int getNp(); 
	Point* getPoly(); 
	void addPoint(Point,int);
	float perimetre();
	bool identique(Polygon ); //est ce que la def est bonne ?
	

};

	