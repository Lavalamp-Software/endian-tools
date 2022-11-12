/*
 * hex_parser.cpp
 *
 *  Created on: 12 Nov 2022
 *      Author: mustafamalik
 */

#include "hex_parser.hpp"

hex_parser::hex_parser() {
	ref create_hex_map();
}

hex_parser::~hex_parser() {
	ref clear();
}

// Private Methods

void hex_parser::create_hex_map() {
	const char HEX_CODES_ALPHA[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	const int HEX_CODES_NUM[] = {10, 11, 12, 13, 14, 15};

	for (int i = 0; i < 6; i++) {
		char key = HEX_CODES_ALPHA[i];
		int value = HEX_CODES_NUM[i];
		ref hex_map.append(key, value);
	}
}

void hex_parser::clear() {
	ref _lines = nullptr;
}

const char* hex_parser::stds_cstr(const std::string& _v) noexcept {
	return _v.c_str();
}

const char* hex_parser::to_cstr(int& __t) noexcept {
	return ref stds_cstr(std::to_string(__t));
}

int hex_parser::internal_hex_conv(int& _v) noexcept {
	ref _lines = ref to_cstr(_v);
	return 0;
}

