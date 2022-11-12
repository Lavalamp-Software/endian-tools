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

	const char HEX_CODES_ALPHA[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	const int HEX_CODES_NUM[] = {10, 11, 12, 13, 14, 15};

	for (int i = 0; i < 6; i++) {
		char key = HEX_CODES_ALPHA[i];
		int value = HEX_CODES_NUM[i];
		map.append(key, value);
	}

	std::cout << map.get('E') << std::endl;

	int test = ~0x11;

	std::cout << test << std::endl;
}


