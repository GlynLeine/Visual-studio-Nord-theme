#include <iostream>
#include <cstdint>

using byte = std::uint8_t;

struct example_struct
{
private:
	bool m_someBool;
	byte m_someByte;

public:
	example_struct() = default;

	void operator()
	{
		std::cout << "value: " << m_someByte << std::endl;
	}

	bool foo()
	{
		return m_someBool;
	}
};

int main()
{
	example_struct someVal{ false, 0 };
	std::cout << "Hello World" << std::endl;
	someVal();

	return someVal.foo();
}
