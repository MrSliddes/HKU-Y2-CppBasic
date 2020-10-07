// VersmorenTymon_CppBAss2_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <list> // For list operations
#include <chrono>
#include <thread>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

// Yes this can be in the header, but im just dropping it here so it is 1 file
class Simon
{
public:
	void says();
};

int main()
{
	Simon simon;
	simon.says();

	return 0;	
}

void Simon::says()
{
	srand(time(0));
	int score = 0;
	int amountOfNumbers = 2;
	string numbers;
	for (size_t i = 0; i < amountOfNumbers; i++)
	{
		int r = rand() % 10;
		numbers += std::to_string(r);
	}
	while (true)
	{
		// Set random number
		numbers += std::to_string((rand() % 10));		
		std::cout << "Simon says: " << numbers << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		system("CLS");
		std::cout << "Repeat: " << std::endl;
		string playerAwnser;
		std::cin >> playerAwnser;
		std::cout << "Player Awnserd: " << playerAwnser << std::endl;
		// Compare awnsers
		if (numbers.compare(playerAwnser) == 0)
		{
			score++;
			amountOfNumbers++;
			std::cout << "Player got it right!" << std::endl;
			std::cout << "Score: " << score << std::endl;
		}
		else
		{
			amountOfNumbers = 2;
			std::cout << "Player got it wrong..." << std::endl;
			std::cout << "Correct awnser: " << numbers << std::endl;
		}
		// Check if player wants to continue
		std::cout << "Continue? (y/n)" << std::endl;
		string c;
		std::cin >> c;
		string yes = "y";
		if (yes.compare(c) == 0)
		{
			// Play again
			system("CLS");
		}
		else
		{
			// Exit
			break;
		}
	}
	return;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
