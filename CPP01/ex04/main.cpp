/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:46:14 by gloms             #+#    #+#             */
/*   Updated: 2024/06/21 16:56:05 by gloms            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstdio>
#include <string>

bool copyFile(const std::string	&sourcePath, const std::string	&destPath) // je passe en const car je ne modifierai jms les valeurs
{
    std::ifstream source(sourcePath.c_str(), std::ios::binary);
    std::ofstream dest(destPath.c_str(), std::ios::binary);

	if (!source.is_open() || !dest.is_open())
	{
        std::cerr << "Error opening files" << std::endl;
        return false;
    }
    dest << source.rdbuf();
    source.close();
    dest.close();

    return true;
}

void replaceInFile(const std::string &sourceFile, const std::string &from, const std::string &to)
{
    std::ifstream source(sourceFile.c_str());
    std::ofstream temp((sourceFile + ".temp").c_str());
    std::string line;

    while (std::getline(source, line))
	{
        std::string newLine;
        size_t startPos = 0;
        size_t foundPos;
        while ((foundPos = line.find(from, startPos)) != std::string::npos)
		{
            newLine += line.substr(startPos, foundPos - startPos) + to;
            startPos = foundPos + from.length();
        }
        newLine += line.substr(startPos);
        temp << newLine << std::endl;
    }

    source.close();
    temp.close();

    std::remove(sourceFile.c_str());
    std::rename((sourceFile + ".temp").c_str(), sourceFile.c_str());
}

int main(int ac, char **av)
{
    if (ac != 4)
	{
        std::cerr << "Usage: " << av[0] << " <source_file> <to_find> <to_replace>" << std::endl;
        return 1;
    }

    std::string sourceFile = av[1];
    std::string destFile = sourceFile + ".temp";
    std::string renamedFile = sourceFile + ".replace";

    if (copyFile(sourceFile, destFile))
	{
        std::cout << "File copied successfully." << std::endl;
        if (std::rename(destFile.c_str(), renamedFile.c_str()) == 0)
		{
            std::cout << "File renamed successfully to " << renamedFile << std::endl;
        }
		else
            std::cerr << "Error renaming file." << std::endl;
    }
	else
        std::cout << "Failed to copy the file." << std::endl;
	replaceInFile(renamedFile, av[2], av[3]);

    return 0;
}
