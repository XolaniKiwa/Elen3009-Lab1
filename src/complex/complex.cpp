// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace

int main()
{
	auto num1 = complex<float>{2.0, 2.0};  // use auto for type deduction
	auto num2 = complex<float>{4.0, -2.0}; // use uniform initialisation syntax (curly braces)

	auto answer = num1 * num2; // type deduced for 'answer' is: complex<float>

	cout << "The answer is: " << answer << endl;
	cout << "Or in a more familiar form: " << answer.real() 
			<< " + " << answer.imag() << "j" 
			<< endl	<< endl;

	// answer++;
	
	//the complex class contains function definitions and operators which have been overloaded
	//one of these operators is the asterisks '*', which has been overloaded to allow the 
	//multiplication of two complex numbers
	//the '++' operator was not overloaded in the complex class hence it does not operate on
	//complex numbers to increment them
	

	return 0;
}

