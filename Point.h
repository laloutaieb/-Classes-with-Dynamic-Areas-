#include <iostream>
#include <string>
#pragma once 
using namespace std; 

class Point
{
private: 
	int x; 
	int y; 
public: //etant donne que c'est un constructor on dois l'appeller comme la class
	Point(); // Empty ctor  
	Point(int myX, int myY); // Constructor 
	Point(const Point& cctor); // copy 
	void setX(int myX);
	void setY(int myY); 
	int getX(); 
	int getY(); 
	float distance(Point B);
	bool pointegaux(Point B);




};

