/* Your friend is building a new match-making service:
	The Object of Your Affection or OOYA for short
	(don’t worry, you still have time to convince
	them to change the name). */

#include <iostream>
#include "profile.hpp"

int	main()
{
	Profile	sam("Sam Drakkila", 30, "New York", "USA", "he/him");

	sam.add_hobby("listening to audiobooks and podcasts");
	sam.add_hobby("playing rec sports like bowling and kickball");
	sam.add_hobby("writing a speculative fiction novel");
	sam.add_hobby("reading advice columns");
	std::cout << sam.view_profile();
}
