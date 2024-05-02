#include <iostream>
#include "../include/lvalue_ref_to_const.h"


int g_x { 50 };

void lvalue_ref_to_const()
{
	const int x { 5 };
	int y { 10 };
	const int& ref { x };
	std::cout << x << ' ' << ref << '\n';

	//ref = 6; // compile error 
	// also we can give const reference to a modifiable lvalue
	const int& ref2 { y };
	//ref2 = 100; // comile error, cant change const reference
	
	const double& r1 { 5 };	// surprisingly const ref can be bind to an rvalue
	
	const char c { 'a' };
	const int& r2 { c };	// because reference is int it will output char 'a' as 97

	std::cout << r1 << '\n';
	std::cout << c << ' ' << r2 << '\n';		
	
	// when using constexpr for references it allows them to be used in constant expressions
	// constexpr reference must be binded with either static variable or global 
	// because it has to know the address of the referent
	
	static int s_x { 55 };

	constexpr int& reference1 { s_x };
	constexpr int& reference2 { g_x };	// okay compiler knows the location
//	constexpr int& reference3 { x }; 	// compile error
	
	std::cout << s_x << ' ' << g_x << '\n';

	// for const variable we need to put const keyword aside constexpr
	static const int s_y { 59 };
	constexpr const int& reference3 { s_y };
	std::cout << s_y << ' ' << reference3 << '\n';	
}

