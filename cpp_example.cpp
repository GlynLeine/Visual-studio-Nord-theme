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

	void operator();

	bool foo();
};

int main()
{
	std::cout << "Hello World" << std::endl;
	return 0;
}
