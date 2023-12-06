/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:09:07 by gloms             #+#    #+#             */
/*   Updated: 2023/12/06 22:32:32 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Phonebook.hpp"

void	print_preview_tab(Phonebook pb)
{
	int i = 0;
	std::string temp;

	std::cout << "     index|first name| last name|  nickname\n";
	while (i < 8)
	{
		std::cout << std::setw(10) << i << "|";
		if (pb.my_contact[i].get_first_name().length() > 10)
		{
			temp = pb.my_contact[i].get_first_name();
			temp.resize(9);
			temp += ".";
			std::cout << temp << "|";
		}
		else
			std::cout << std::setw(10) << pb.my_contact[i].get_first_name() << "|";

		if (pb.my_contact[i].get_last_name().length() > 10)
		{
			temp = pb.my_contact[i].get_last_name();
			temp.resize(9);
			temp += ".";
			std::cout << temp << "|";
		}
		else
			std::cout << std::setw(10) << pb.my_contact[i].get_last_name() << "|";

		if (pb.my_contact[i].get_nickname().length() > 10)
		{
			temp = pb.my_contact[i].get_nickname();
			temp.resize(9);
			temp += ".";
			std::cout << temp << "\n";
		}
		else
			std::cout << std::setw(10) << pb.my_contact[i].get_nickname() << "\n";

		i++;
	}
}

void	search_contact(Phonebook pb)
{
	std::string temp;
	print_preview_tab(pb);
	std::cout << "enter index :\n";
	std::getline(std::cin, temp);
	if (temp == "0" || temp == "1" || temp == "2" || temp == "3" || temp == "4" || temp == "5" || temp == "6" || temp == "7")
	{
		std::cout << "first name : " << pb.my_contact[(int)temp[0] - 48].get_first_name() << "\n";
		std::cout << "last name : " << pb.my_contact[(int)temp[0] - 48].get_last_name() << "\n";
		std::cout << "nickname : " << pb.my_contact[(int)temp[0] - 48].get_nickname() << "\n";
		std::cout << "phone number : " << pb.my_contact[(int)temp[0] - 48].get_phone_number() << "\n";
		std::cout << "darkest secret : " << pb.my_contact[(int)temp[0] - 48].get_darkest_secret() << "\n";
	}
	else
	{
		std::cout << "\n\e[0;31mWRONG INPUT\e[0m\n";
		return;
	}
}

void	add_contact(Phonebook *pb)
{
	static int i;
	std::string temp;
	int is_mt = 1;

	std::cout << "enter first name\n";
	while (is_mt == 1)
	{
		std::getline(std::cin, temp);
		if (temp == "")
		{
			std::cout << "no empty line, please fill\n";
			continue;
		}
		pb->my_contact[i].set_first_name(temp);
		is_mt = 0;
	}
	is_mt = 1;
	std::cout << "enter last name\n";
	while (is_mt == 1)
	{
		std::getline(std::cin, temp);
		if (temp == "")
		{
			std::cout << "no empty line, please fill\n";
			continue;
		}
		pb->my_contact[i].set_last_name(temp);
		is_mt = 0;
	}
	is_mt = 1;
	std::cout << "enter nickname\n";
	while (is_mt == 1)
	{
		std::getline(std::cin, temp);
		if (temp == "")
		{
			std::cout << "no empty line, please fill\n";
			continue;
		}
		pb->my_contact[i].set_nickname(temp);
		is_mt = 0;
	}
	is_mt = 1;
	std::cout << "enter phone number\n";
	while (is_mt == 1)
	{
		std::getline(std::cin, temp);
		if (temp == "")
		{
			std::cout << "no empty line, please fill\n";
			continue;
		}
		pb->my_contact[i].set_phone_number(temp);
		is_mt = 0;
	}
	is_mt = 1;
	std::cout << "enter darkest secret\n";
	while (is_mt == 1)
	{
		std::getline(std::cin, temp);
		if (temp == "")
		{
			std::cout << "no empty line, please fill\n";
			continue;
		}
		pb->my_contact[i].set_darkest_secret(temp);
		is_mt = 0;
	}
	is_mt = 1;
	if (i < 7)
		i++;
	else
		i = 0;
}

int main()
{
	Phonebook phonebook;
	std::string temp;

	std::cout << "welcome to my phonebobok\n";
	std::cout << "please type :\nADD : to set a new contact\nSEARCH : to find a contact\nEXIT : to leave the program.\n\n";
	while (1)
	{
		std::getline(std::cin, temp);
		if (temp == "ADD")
			add_contact(&phonebook);
		else if (temp == "SEARCH")
			search_contact(phonebook);
		else if (temp == "EXIT" || std::cin.eof())
		 	exit(0);
		else
		{
			std::cout << "\n\e[0;31mWRONG INPUT\e[0m\nplease type :\nADD : to set a new contact\nSEARCH : to find a contact\nEXIT : to leave the program.\n";
			continue;
		}
		std::cout << "\n\n\e[0;31m------MAIN MENU------\e[0m\nplease type :\nADD : to set a new contact\nSEARCH : to find a contact\nEXIT : to leave the program.\n\n";
	}
}
