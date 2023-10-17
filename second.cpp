#include <iostream>



int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		std::cout << "Hey fella, I dunno who r u!" << std::endl;
	}
	else
	{
		std::cout << "Good morning, " << argv[1] << std::endl;
	}
	return 0;
}
