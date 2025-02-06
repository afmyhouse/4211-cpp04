/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:12:50 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:12:51 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <cstdlib>

# ifndef IDEAS
# define IDEAS 100
# endif

/// @brief 	Brain class definition to create many, many, many Animals
class Brain
{
	private:
		std::string _ideas[IDEAS];

	public:
		Brain(void);
		Brain(const Brain& sourceObj);
		~Brain(void);

		Brain& operator=(const Brain& sourceObj);

		std::string	getIdea( int i ) const;
		void		getAllIdeas( void ) const;
		void		setIdea( int i, std::string newIdea);
		void		randomIdeas( void );
};

#endif
