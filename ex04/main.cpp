/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/26 16:29:55 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main.hpp"
int return_with_err(int err)
{
	switch (err)
	{
	case ERR_ARGS:
		cout << "Invalid number of args" << endl;
		break;
	case ERR_FILE:
		cout << "Invalid file" << endl;
		break;
	case ERR_INPUT:
		cout << "Invalid input string" << endl;
		break;
	case ERR_OUTPUT:
		cout << "Could not write to file" << endl;
		break;
	default:
		cout << "Unknown Error" << endl;
	}
	return 1;
}

int replace_target(string &copy, string target, string sub)
{
	int	   target_pos;
	size_t target_len = target.size();

	if (target_len == 0)
		return 0;
	while (1)
	{
		target_pos = copy.find(target);
		if (target_pos == -1)
			break;
		copy.erase(target_pos, target_len);
		copy.insert(target_pos, sub);
	}
	return 0;
}

int extract_content(char *fileName, string &copy)
{
	ifstream	 file;
	stringstream cp_stream;
	string		 buffer;
	bool		 nl = false;

	file.open(fileName);
	if (file.is_open())
		while (getline(file, buffer))
		{
			if (nl)
				cp_stream << endl;
			cp_stream << buffer;
			nl = true;
		}
	else
		return 1;
	copy = cp_stream.str();
	file.close();
	return 0;
}

int write_to_file(char *fileName, string copy)
{
	ofstream file;
	string	 newFilename = (string)fileName + ".replace";
	file.open(newFilename.c_str());
	if (file.is_open())
		file << copy;
	else
		return 1;
	return 0;
}

int main(int argc, char **argv)
{
	string target, sub;
	string copy;

	try
	{
		if (argc != 4)
			throw ERR_ARGS;
		target = argv[2];
		sub	   = argv[3];
		if (extract_content(argv[1], copy))
			throw ERR_FILE;
		if (replace_target(copy, target, sub))
			throw ERR_INPUT;
		if (write_to_file(argv[1], copy))
			throw ERR_OUTPUT;
	}
	catch (int err)
	{
		return return_with_err(err);
	}
	cout << copy;
	return 0;
}
