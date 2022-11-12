/*
 * main.cpp
 *
 *  Created on: 11 Nov 2022
 *      Author: mustafamalik
 */

#include <iostream>

#include "./conf/config.hpp"
#include "./data/simple_hmap.hpp"

int main() {
	//run_tests();
	std::ios_base::sync_with_stdio(false);
	simple_hmap<char, int> map;

	char key = 'A';
	int value = 10;

	map.append(key, value);
	if (map.exists(key)) {
		std::cout << "it exists yay!!!" << std::endl;
	}
}


