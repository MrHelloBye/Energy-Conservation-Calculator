//
//  main.cpp
//  Energy Conservation Motion Calculator
//
//  Created by Liam Clink on 9/19/15.
//  Copyright © 2015 Liam Clink. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

void harmonicOscillator() {
    double delx, x0, m, v0, k;
    double t = 0.0, E, x, xf;
    
	cout << "Enter increment of the sum:\n";
	cin >> delx;
	cout << "Enter initial x:\n";
	cin >> x0;
	x = x0;
	cout << "Enter initial v:\n";
	cin >> v0;
	cout << "Enter m:\n";
    cin >> m;
    cout << "Enter k:\n";
    cin >> k;
    E = 0.5*m*v0*v0;

    while (x < xf) {
        t = t + delx/sqrt(2*(E-0.5*k*x*x)/m); // u(x) needs to be defined.
        x = x0 + 0.5*delx;
    }
        printf("t = %g, x = %g\n", t, x);
}

int main() {
    // Write a menu program for multiple types of calculations.
    harmonicOscillator();
    
    return 0;
}