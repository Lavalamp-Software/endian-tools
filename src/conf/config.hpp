/*
 * config.hpp
 *
 *  Created on: 11 Nov 2022
 *      Author: mustafamalik
 */

#include <stdexcept>
#include <string>

#ifndef SRC_CONF_CONFIG_HPP_
#define SRC_CONF_CONFIG_HPP_

#define USE_REVERSE_HEX 	0x0
#define USE_REVERSE_BIN 	0x0

#define USE_FORWARD_HEX 	0x0
#define USE_FORWARD_BIN 	0x0

#define ref this->

void send_fail(const char*);
void check_value(int, int, const char*);
void run_tests();

#endif /* SRC_CONF_CONFIG_HPP_ */
