//**************************************//
// Proprietary Code of MyAlt Industries	//
// Created on 4/10/2018					//
// For Use with Apollo Avionics Suite	//
//**************************************//
#include "stdafx.h"
#include <cmath>
#include <iostream>
using namespace std;


int main()
{
	float inpres, stanpress;
	float g(9.80665), M(.0289644), R(8.31447), T(288.15), L(.0065);
	float hft, x, xn, y, z, hm;
	cout << "What is the Operating Pressure" << endl;
	cin >> inpres;
	cout << "What is the Ground Pressure" << endl;
	cin >> stanpress;
	x = 5.2554;
	xn = 1 / x;
	y = inpres / stanpress;
	z = pow(y, xn);
	hm = (T*(1 - (z)) / L);
	cout << "Calculated Altitude" << endl;
	cout << hm << endl;
	h = hm * 3.28084;
	cout << "Calculated Altitude feet" << endl;
	cout << hft;

}
