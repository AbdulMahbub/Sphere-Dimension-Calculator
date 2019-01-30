//==========================================================
//
// Title:      Circle Dimension Calculator
// Course:     CSC 1101
// Lab Number: Lab 04-02
// Author:     Abdul Mahbub
// Date:       1/25/2019
// Description:Develop code that can find dimensions of a sphere with radius from user
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

  // Declare constants
	const double Pie = 3.14159;
	double Rad;



  // Show application header
	cout << "Welcome to Spherical Squids!" << endl;
	cout << "--------------------------" << endl;
	cout << endl;

  // Display the radius	
	cout << "Enter the radius in cm: ";
	cin >> Rad;
	cout << endl;
	cout << fixed << setprecision(3);

	// Equations
	double Vol = (4 * Rad * Rad * Rad * Pie) / 3; // This is the equation for the volume

	double Circ = 2 * Pie * Rad; // This the equation for the circumference

	double SA = Rad * Rad * Pie * 4; // This is the equation for the Surface Area

	// Row 1
	cout << setw(15) << left << "Radius:" << setw(20) << right << Rad << setw(3) << "cm" << left << endl;

	// Row 2
	cout << setw(15) << left << "Volume:" << setw(20) << right << Vol << setw(5) << "cm^3" << left << endl;

	// Row 3
	cout << setw(15) << left << "Circumference:" << setw(20) << right << Circ << setw(3) << "cm" << left << endl;

	// Row 4
	cout << setw(15) << left << "Surface Area:" << setw(20) << right << SA << setw(5) << "cm^2" << left << endl;

  // Show application close
	cout << "\nEnd of Spherical Squids" << endl << endl;

  // Pause before application window closes
  cout << "Press any key to exit ..." << endl;
  _getch();

}
