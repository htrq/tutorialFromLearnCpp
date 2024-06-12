#include <iostream>

template<typename T>
class DynamicArray
{
	size_t m_size{};
	T * m_arr;
public:
	DynamicArray(size_t size)
		: m_size(size)
		, m_arr(new T[size])
	{
	}
	~DynamicArray()	// destructor
	{
		delete [] m_arr;	// delete whatever in m_arr when class destroyed
	}
	T & operator [](size_t index)
	{
		return m_arr[index];	// no match for operator [], so i created this by myself
	}
	const T & operator [](size_t index) const // this operator overload is for getting value
	{
		return m_arr[index];	
	}
};

int main(int argc, char ** argv)
{
	DynamicArray<float> arr(10);
	std::cout << sizeof(arr) << '\n';
	std::cout << arr[3] << '\n';
	arr[3] = 30.33;
	std::cout << arr[3] << '\n';
	arr[3] = 60;	// because of defined operator[] above this now works
	std::cout << arr[3] << '\n';

	return 0;
}
