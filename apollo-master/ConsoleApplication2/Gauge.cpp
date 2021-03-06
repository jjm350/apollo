// Avonics Calculator for Apollo
// Input requirements-
// inpres = detected pressure from barometer
// stanpress = user defined pressure calibration at sealevel
// pitotpress = detected pressure from pitot tube
// proprietary code used by MyAlt on Apollo Avionics Suite

#include "stdafx.h"
#include <cmath>
#include <iostream>
using namespace std;


int gauges() {
	double inpres, stanpres, unitcon;
	double g(9.81), M(.028944), R(8.31447), T(288.15), L(.0065);
	int x;
	unitcon = 1;
	x = 1;
	int stancon(){
		//Pressure Units are in Pa
		cout << "What is the standard pressure" << endl;
		cin >> stanpres;
		while (x = 1) {
			cout << "What is the detected Pressure" << endl;
			cin >> inpres;
			int altimeter() {
				double h, xa, y, z;
				xa = 5.2554;
				xa = 1 / xa;
				y = inpres / stanpres;
				z = pow(y, xa);
				h = (T*(1 - (z)) / L);
				if (unitcon = 1) {
					cout << "Altitude in Meters" << endl;
					cout << h << endl;
					return h;
				}
				else {
					cout << "Altitude in Feet" << endl;
					h = h * 3.28084;
					cout << h << endl;
					return h;
				}
			}
			int airspeedind()
			{
				double pitotpres;
				double aspeed, rho(1.225);
				cout << "Indicated Pitot Pressure" << endl;
				cin >> pitotpres;
				//indsetting is for the user to designate how airspeed is displayed
				aspeed = sqrt((2 * (pitotpres - inpres)) / rho);
				if (x = 1) {
					aspeed = aspeed * 3.6;
					cout << "Airspeed in Km/h" << endl;
					cout << aspeed;
					return aspeed;
				}
				else {
					aspeed = aspeed * 1.94;
					cout << "Airspeed in Kts" << endl;
					cout << aspeed;
					return aspeed;
				}
			};
		};
	};
};
