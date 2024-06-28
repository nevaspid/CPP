/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:50:09 by gloms             #+#    #+#             */
/*   Updated: 2024/06/26 19:38:09 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define INPUT_IS_DEBUG 1
# define INPUT_IS_INFO 2
# define INPUT_IS_WARNING 3
# define INPUT_IS_ERROR 4

# define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"
# define INFO_MSG "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"
# define WARNING_MSG "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n"
# define ERROR_MSG "This is unacceptable! I want to speak to the manager now.\n"

class Harl
{
	public :
		Harl();
		~Harl();
		void complain(std::string level);
	private :
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif
