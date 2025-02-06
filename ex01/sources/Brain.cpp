/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:16:46 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:16:47 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain :: Brain(void)
{
	std::cout << "[Brain] Default constructor called.";
	std::cout << std::endl;
	this->randomIdeas();
}

Brain :: Brain (const Brain& sourceObj)
{
	std::cout << "[Brain] Copy constructor called.";
	std::cout << std::endl;
	*this = sourceObj;
}

Brain& Brain::operator=(const Brain& sourceObj)
{
	std::cout << "[Brain] Copy assignament called.";
	std::cout << std::endl;
	if (this != &sourceObj)
	{
		for (size_t i = 0; i < IDEAS; i++)
			this->_ideas[i] = sourceObj._ideas[i];
	}
	return (*this);
}

Brain:: ~Brain(void)
{
	std::cout << "[Brain] Desctructor called.";
	std::cout << std::endl;
}

std::string Brain::getIdea( int i ) const
{
	return (this->_ideas[i]);
}

void	Brain::getAllIdeas(void) const
{
	for (size_t i = 0; i < IDEAS; i++)
		std::cout <<"Idea[" << i << "] :" + this->_ideas[i] << std::endl;
}

void	Brain::setIdea( int i, std::string newIdea ) {
	this->_ideas[i] = newIdea;
}

void Brain::randomIdeas(void)
{
	const std::string rIdeas[] = {
		"Cats invented calculus.",
		"Trees grow upside down.",
		"Pizza cures broken hearts.",
		"Clouds are marshmallow factories.",
		"Bananas communicate telepathically.",
		"Fish fly underwater.",
		"Moon is made of cheese.",
		"Stars are holes in sky.",
		"Dogs can speak French.",
		"Time travels sideways.",
		"Grass hides alien cities.",
		"Mountains are sleeping giants.",
		"Sun is giant lemon.",
		"Snails run marathons.",
		"Books contain secret portals.",
		"Chairs hold grudges silently.",
		"Birds gossip about weather.",
		"Socks teleport to Narnia.",
		"Rainbows lead to treasure."
		"Pens write their memoirs.",
		"Shoes dream of freedom.",
		"Walls listen to whispers.",
	};
	for (size_t i = 0; i < IDEAS; i++)
	{
		this->_ideas[i] = rIdeas[rand() % 21];
	}

}
