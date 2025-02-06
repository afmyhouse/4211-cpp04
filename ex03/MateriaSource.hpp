/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:30:52 by antoda-s          #+#    #+#             */
/*   Updated: 2024/05/17 13:30:53 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"
# include <cstring>

# define SLOTS 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* learntMaterias[SLOTS];
		int numberLearntMaterias;

	public:
		//! Constructors and destructor
		MateriaSource(void);
		MateriaSource(const MateriaSource& ms);
		~MateriaSource(void);

		//! Operator overloading
		MateriaSource& operator=(const MateriaSource& right);

		//! Others
		void learnMateria(AMateria *materia);
		AMateria *createMateria(const std::string &type);
};

#endif