/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 00:44:07 by math              #+#    #+#             */
/*   Updated: 2024/05/09 01:18:12 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void printMem(std::string str, std::string *strPtr, std::string &strRef)
{
	std::cout << "memory address of the string variable\t:\t" << &str <<std::endl;
	std::cout << "memory address held by stringPTR\t:\t" << strPtr  <<std::endl;
	std::cout << "memory address held by stringREF\t:\t" << &strRef <<std::endl;
	std::cout <<std::endl;
}

void printVal(std::string str, std::string *strPtr, std::string &strRef)
{
	std::cout << "value of the string variable\t:\t" << str <<std::endl;
	std::cout << "value pointed to by stringPTR.\t:\t" << *strPtr  <<std::endl;
	std::cout << "value pointed to by stringREF\t:\t" << strRef <<std::endl;
	std::cout <<std::endl;
}

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string	&strRef = str;

	printMem(str, strPtr, strRef);
	printVal(str, strPtr, strRef);

	str = "HI THIS IS BRAIN AGAIN";
	
	printVal(str, strPtr, strRef);

	strRef = "HI THIS IS BRAIN AGAIN AGAIN";

	printVal(str, strPtr, strRef);
	
	return (0);
}