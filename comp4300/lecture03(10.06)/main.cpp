#include <iostream>

class IntArray
{
	size_t m_size{};
	int * m_arr;
public:
	IntArray(size_t size)
		: m_size(size)
		, m_arr(new int[size])
	{
	}
	~IntArray()	// destructor
	{
		delete [] m_arr;	// delete whatever in m_arr when class destroyed
	}
	const int get(size_t index) const
	{
		return m_arr[index];
	}
	void set(size_t index, int val) const
	{
		m_arr[index] = val;
	}
};


int main(int argc, char ** argv)
{
	IntArray arr(10);
	std::cout << sizeof(arr) << '\n';
	std::cout << arr.get(3) << '\n';
	arr.set(3, 50);
	std::cout << arr.get(3) << '\n';
	return 0;
}
