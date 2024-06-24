/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:46:14 by gloms             #+#    #+#             */
/*   Updated: 2024/06/21 19:14:55 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstdio>
#include <string>

bool	replaceInFile(const std::string sourceFile, const std::string renamedFile,
					const std::string toFind, const std::string toReplace)
{
	std::ifstream file(sourceFile.c_str());
	std::ofstream outFile(renamedFile.c_str());

	if (!file.is_open())
	{
		std::cerr << "Error while opening file" << std::endl;
		return false;
	}
	if (!outFile.is_open())
	{
        std::cerr << "Error while creating file" << std::endl;
        return false;
    }
	std::string line;
	const std::string &refLine = line;
	std::string newLine;
	size_t		pos;
	size_t		start = 0;
	while (std::getline(file, line))
	{
		while ((pos = refLine.find(toFind, start)) != std::string::npos)
		{
		    newLine += refLine.substr(start, pos - start) + toReplace;
		    start = pos + toFind.length();
		}
		newLine += refLine.substr(start); // Ajouter le reste de la ligne après la dernière occurrence
		outFile << newLine << std::endl;
		pos = 0;
		start = 0;
		newLine.erase();
		line.erase();
	}
	return true;
}

int main(int ac, char **av)
{
    if (ac != 4)
	{
        std::cerr << "Usage: " << av[0] << " <source_file> <toFind> <toReplace>" << std::endl;
        return 1;
    }

	const std::string sourceFile = av[1];
	const std::string renamedFile = sourceFile + ".replace";
	const std::string toFind = av[2];
	const std::string toReplace = av[3];

	if (replaceInFile(sourceFile, renamedFile, toFind, toReplace))
		return 0;
	return 1;
}
