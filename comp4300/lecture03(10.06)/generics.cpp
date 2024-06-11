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
	const T get(size_t index) const
	{
		return m_arr[index];
	}
	void set(size_t index, T val) const
	{
		m_arr[index] = val;
	}
};

int main(int argc, char ** argv)
{
	DynamicArray<float> arr(10);
	std::cout << sizeof(arr) << '\n';
	std::cout << arr.get(3) << '\n';
	arr.set(3, 30.33);
	std::cout << arr.get(3) << '\n';
	return 0;
}
