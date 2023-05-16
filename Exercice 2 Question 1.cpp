#include <iostream>
#include "Polygon.h"
#include "Point.h"
#include <cmath>
using namespace std;

int main()
{

	char junk;
	int point, x, y;

	cout << "enter number of sides:" << endl;//Receveing the data from the user
	cin >> point;
	Polygon A(point);
	cout << "enter the point values:" << endl;
	for (size_t i = 0; i < point; i++)
	{
		cin >> junk >> x >> junk >> y >> junk;
		Point xy(x, y);
		A.addPoint(xy, i);
	}
	cout << "enter number of sides:" << endl;
	cin >> point;
	Polygon B(point);
	cout << "enter the point values:" << endl;//Receveing the data from the user
	for (size_t i = 0; i < point; i++)
	{
		cin >> junk >> x >> junk >> y >> junk;
		Point xy(x, y);
		B.addPoint(xy, i);
	}
	if (A.identique(B) == 1)//Printing if the polygons are equal
	{
		cout << "equal" << endl;
		cout << "perimeter: " << A.perimetre() << endl;
	}
	else
	{
		cout << "not equal" << endl;
		cout << "perimeter: " << A.perimetre() << endl;
		cout << "perimeter: " << B.perimetre() << endl;
	}

	return 0;
}



