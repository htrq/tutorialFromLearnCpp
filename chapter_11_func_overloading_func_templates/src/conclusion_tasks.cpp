#include <iostream>

template<typename T>
T add(T x, T y)
{
	return x + y;
}

auto mult(auto x, auto y)
{
	return x * y;
}

auto sub(auto x, auto y)
{
	return x - y;
}


void conclusion_tasks()
{
	std::cout << "return of add template:\n";
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';
        std::cout << "return of mult template:\n";
	std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';
	std::cout << "return of sub\n";
	std::cout << sub(3, 2) << '\n';	
	std::cout << sub(3.5, 2) << '\n'; 
	std::cout << sub(4, 1.5) << '\n';

}
