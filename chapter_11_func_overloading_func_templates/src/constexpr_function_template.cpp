#include <iostream>

template <int N>
constexpr int factorial()
{
	static_assert(N >= 0, "Input for factorial mustn't be negative");
	if (N == 0)
		return 1;
	int product{ 1 };
	for (int i = 1; i <= N; i++)
	{
		product *= i;
	}
	return product;
}

void constexpr_function_template()
{
	static_assert(factorial<0>() == 1);
	static_assert(factorial<3>() == 6);
	static_assert(factorial<5>() == 120);
	std::cout << factorial<5>() << '\n';
}
