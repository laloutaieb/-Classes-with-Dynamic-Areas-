#include "Polygon.h"
#include "Point.h"
#include <cmath>
Polygon::Polygon()
{
	np = 0; 
	poly = nullptr; 
	cout << "in empty constructor" << endl; 
}
Polygon::Polygon(int num)// Constructor 
{
	np = num; 
	poly = new Point[num]; 
	cout << "in one parameter constructor" << endl;
}
Polygon::Polygon(const Polygon& V)// copy 
{
	np = V.np; 
	poly = new Point[np];
	for (int i = 0; i < np; i++)
	{
		poly[i] = V.poly[i]; 
	}
	cout << "in copy constructor" << endl; 
}

Polygon :: ~Polygon() // les destructeur ne s'utilise que pour array pour cela il ny a pas pour point
{ 
	if (poly)
		delete poly; 
	poly = nullptr; 
	cout << "in destructor" << endl; 
}

int Polygon::getNp()
{
	return np;
}

Point* Polygon::getPoly()
{
	Point* newA; 
	newA = new Point[np]; 
	for (int i = 0; i < np; i++)
	{
		newA[i] = poly[i]; 
	}
	return  newA; 
}

void Polygon::addPoint(Point xy, int i)
{
	poly[i] = xy; 
}

float Polygon::perimetre()
{
	float p=0; 
	for (int i = 0; i < np-1; i++)
	{
		p += poly[i].distance(poly[i + 1]); 
	}
	p +=(float) poly[0].distance(poly[np-1]); 
	double f= round(p);
	return f; 
}




/* Prop : la conclusion de cette fonction est donc que quand j'ai
une class dans une class comme dans ce cas ou Point. est dans
polygone je ne peux pas accder calculer la distance entre les
deux point sans la definir dans un autre ficher. A moins que
l'on ne fasse de systeme telle que
*/

bool Polygon::identique(Polygon poly1)
{
	if (np != poly1.np)
		return false;

	int d = 0;
	for (int i = 0; i < np; i++)
	{
		for (int j = 0; j <= np; j++)
		{
			if (j == np) // si il passe sur tout et quil ne trouve pas 
				return false;
			if (poly[i].pointegaux(poly1.getPoly()[j])) //moshe a fait autrement dans ce cas il a utilise les get
			{
				d++;
				break;
			}

		}
	}
	if (d == np)
	{
		return true;
	}
	return false;
}



/*
a=b; 
a++; alors b ne change pas 
mais si je fais 
Point* A = poly; 
et que je modifie poly alors ca va changer poly
du coup c'est pour ca qu'il faut faire une valeur swap 
pour ne pas toucher et modifier poly dans le main 


*/






