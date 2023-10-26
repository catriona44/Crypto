#include <iostream>

int main()
{
	while (true)
	{
		std::cout << "1: Print help" << std::endl;
		std::cout << "2: Print exchange stats" << std::endl;
		std::cout << "3: Make an offer" << std::endl;
		std::cout << "4: Make a bid" << std::endl;
		std::cout << "5: Print wallet" << std::endl;
		std::cout << "6: Continue" << std::endl;
		std::cout << "7: Exit" << std::endl;
		std::cout << "======================" << std::endl;

		int option = 0;
		std::cout << "Type in 1-6" << std::endl;
		std::cin >> option;
		
		if (option == 1)
		{
			std::cout << "At some point I'll put some help here" << std::endl;
		}
		else if (option == 2)
		{
			std::cout << "At some point I'll put some data about the market" << std::endl;
		}
		else if (option == 3)
		{
			std::cout << "Make an offer" << std::endl;
		}
		else if (option == 4)
		{
			std::cout << "Make a bid" << std::endl;
		}
		else if (option == 5)
		{
			std::cout << "This will print out your wallet" << std::endl;
		}
		else if (option == 6)
		{
			std::cout << "Going to next time frame" << std::endl;
		}
		else if (option == 7)
		{
			std::cout << "Exiting" << std::endl;
			return 0;
		}
		else
		{
			std::cout << "Invalid choice. Choose 1-6" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}

	return 0;
}