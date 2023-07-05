/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:10:28 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/05 20:40:27 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void	replace(char *argv[], std::ifstream& readFile, std::ofstream& writeFile)
{
	std::string content;
	
	readFile.seekg(0, std::ios::end);
	size_t size = readFile.tellg();
	content.resize(size);
	readFile.seekg(0, std::ios::beg);
	readFile.read(&content[0], size);

	std::string before(argv[2]);
	std::string after(argv[3]);
	size_t pos = 0;
	if (!before.empty())
	{
		while ((pos = content.find(before, pos)) != std::string::npos)
		{
			content.erase(pos, before.length());
			content.insert(pos, after);
			pos += after.length();
		}
	}
	writeFile << content;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (std::cout << "Error: need 3 arguments" << std::endl, 1);
	
	std::ifstream readFile(argv[1]);
	if (readFile.fail())
		return (std::cout << "Error: cannot open readFile: " \
		<< argv[1] << std::endl, 1);

	std::string writeFileName(argv[1]);
	writeFileName.append(".replace");

	std::ofstream writeFile(writeFileName);
	if (writeFile.fail())
	{
		std::cout << "Error: cannot open writeFile: " << writeFileName << std::endl;
		writeFile.close();
		return (1);
	}
	replace(argv, readFile, writeFile);
	readFile.close();
	writeFile.close();
}