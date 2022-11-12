/*
 * hex_parser.hpp
 *
 *  Created on: 11 Nov 2022
 *      Author: mustafamalik
 */

#ifndef SRC_PARSER_HEX_PARSER_HPP_
#define SRC_PARSER_HEX_PARSER_HPP_

#include "../conf/config.hpp"
#include "../data/simple_hmap.hpp"

class hex_parser {
private:
	const char* _lines = nullptr;
	simple_hmap<char, int> hex_map;
private:
	const char* stds_cstr(const std::string&) noexcept;
	const char* to_cstr(int&) noexcept;
	int internal_hex_conv(int&) noexcept;
	void clear();
	void create_hex_map();
public:
	explicit hex_parser();

	hex_parser(const hex_parser&) = delete;
	hex_parser(hex_parser&) = delete;

	~hex_parser();

	hex_parser operator = (const hex_parser&) = delete;
	hex_parser operator = (hex_parser&) = delete;
	hex_parser operator = (hex_parser) = delete;
public:
	int to_hex(const char*) noexcept;
	int to_hex(const std::string&) noexcept;
};


#endif /* SRC_PARSER_HEX_PARSER_HPP_ */
