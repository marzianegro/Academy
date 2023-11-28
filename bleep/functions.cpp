#include <iostream>
#include <string>
#include <algorithm>
#include "functions.hpp"

int	search(std::string word, std::string const text)
{
    std::size_t position = text.find(word);

    if (position != std::string::npos)
        return (static_cast<int>(position));
    else
        return (-1);
}

void	bleep(std::string word, std::string &text)
{
	std::size_t	position = search(word, text);

	while (position != -1)
	{
		for (int i = position; i != position + word.length(); i++)
			text[i] = '*';
		position = search(word, text);
	}
}
