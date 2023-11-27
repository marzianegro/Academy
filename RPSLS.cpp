/* Note from the creator of The Big Bang Theory, Sam Kass:
    “I invented this game (with Karen Bryla) because it seems like
    when you know someone well enough, 75-80% of any Rock Paper
    Scissors games you play with that person end up in a tie. Well,
    here is a slight variation that reduces that probability. This
    version is also nice because it satisfies the Law of Fives.” */

#include <iostream>
#include <stdlib.h>

int	main()
{
	// live long and prosper
	srand(time(NULL));
	int	computer = rand() % 5 + 1;
	int	user = 0;

	std::cout << "====================\n";
	std::cout << "Rock, Paper, Scissors, Lizard, Spock!\n";
	std::cout << "====================\n";
	std::cout << "1) Rock\n";
	std::cout << "2) Paper\n";
	std::cout << "3) Scissors\n";
	std::cout << "4) Lizard\n";
	std::cout << "5) Spock\n";
	std::cout << "Shoot! ";
	std::cin >> user;

	if (computer == 1)
		std::cout << "Computer chose Rock!\n\n";
	else if (computer == 2)
		std::cout << "Computer chose Paper!\n\n";
	else if (computer == 3)
		std::cout << "Computer chose Scissors!\n\n";
	else if (computer == 4)
		std::cout << "Computer chose Lizard!\n\n";
	else if (computer == 5)
		std::cout << "Computer chose Spock!\n\n";

	// Rock
	if (user == 1)
	{
		if (computer == 2)
			std::cout << "Paper covers Rock! You lost!\n";
		else if (computer == 3)
			std::cout << "Rock crushes Scissors\n";
		else if (computer == 4)
			std::cout << "Rock crushes Lizard! You won!\n";
		else if (computer == 5)
			std::cout << "Spock vaporizes Rock! You lost!\n";
	}
	// Paper
	else if (user == 2)
	{
		if (computer == 1)
			std::cout << "Paper covers Rock! You won!\n";
		else if (computer == 3)
			std::cout << "Scissors cut Paper! You lost!\n";
		else if (computer == 4)
			std::cout << "lizard eats Paper! You lost!\n";
		else if (computer == 5)
			std::cout << "Paper disproves Spock! You won!\n";
	}
	// Scissors
	else if (user == 3)
	{
		if (computer == 1)
			std::cout << "Rock crushes Scissors! You lost!\n";
		else if (computer == 2)
			std::cout << "Scissors cuts Paper! You lost!\n";
		else if (computer == 4)
			std::cout << "Scissors decapitate Lizard! You won!\n";
		else if (computer == 5)
			std::cout << "Spock smashes Scissors! You lost!\n";
	}
	// Lizard
	else if (user == 4)
	{
		if (computer == 1)
			std::cout << "Rock crushes Lizard! You lost!\n";
		else if (computer == 2)
			std::cout << "Lizard ears Paper! You won!\n";
		else if (computer == 3)
			std::cout << "Scissors decapitate Lizard! You lost!\n";
		else if (computer == 5)
			std::cout << "Lizard poisons Spock! You won!\n";
	}
	// Spock
	else if (user == 5)
	{
		if (computer == 1)
			std::cout << "Spock vaporizes Rock! You won!\n";
		else if (computer == 2)
			std::cout << "Paper disproves Spock! You lost!\n";
		else if (computer == 3)
			std::cout << "Spock smashes Scissors! You won!\n";
		else if (computer == 4)
			std::cout << "Lizard posions Spock! You lost!\n";
	}
}

  