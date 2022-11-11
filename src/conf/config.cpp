/*
 * config.cpp
 *
 *  Created on: 11 Nov 2022
 *      Author: mustafamalik
 */

#include "config.hpp"

void send_fail(const char* message) {
	throw std::runtime_error(std::string(message));
}

void check_value(int macro_expr_val, int next_macro_expr, const char* reason) {
	if (macro_expr_val == next_macro_expr) {
		send_fail(reason);
	}
}

void run_tests() {
#if !defined(USE_REVERSE_HEX) || !defined(USE_REVERSE_BIN)
	send_fail("USE_REVERSE_HEX or USE_REVERSE_BIN is not defined");
#endif
#if !defined(USE_FORWARD_HEX) || !defined(USE_FORWARD_BIN)
	send_fail("USE_FORWARD_HEX or USE_FORWARD_BIN is not defined");
#endif
#if defined(USE_REVERSE_HEX) && defined(USE_REVERSE_BIN)
	check_value(USE_REVERSE_HEX, USE_REVERSE_BIN, "USE_REVERSE_HEX && USE_REVERSE_BIN cannot have the same value");
#endif
#if defined(USE_FORWARD_HEX) && defined(USE_FORWARD_BIN)
	check_value(USE_REVERSE_HEX, USE_REVERSE_BIN, "USE_FORWARD_HEX && USE_FORWARD_BIN cannot have the same value");
#endif
}


