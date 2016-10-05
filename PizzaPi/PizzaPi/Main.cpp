#include <iostream>
#include <iomanip>
using namespace std;

//PROGRAM: PizzaPi
//AUTHOR: Tyler Timmins
//COURSE: ITSE 1307 2002
//DESCRIPTION: Program that calculates the number of slices a pizza
//				of any size can be divided into.

int main()
{
	//declare variables
	double dDiameter;
	double dRadius;
	double dArea;
	double dWholePizza;
	double dOneSlice = 14.125;

	//ask for input
	cout << "Enter the Diameter in Inches: ";
	cin >> dDiameter;

	//calculate
	dRadius = dDiameter / 2;
	dArea = 3.14159 * (pow(dRadius, 2));
	dWholePizza = dArea / dOneSlice;
	
	//set precision to 1 decimal place
	cout << fixed << setprecision(1);
	//show output
	cout << "The Number of Slices that can be made is " << dWholePizza << "." << endl;

	return 0;
}