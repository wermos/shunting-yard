#include "config_reader.hpp"

auto config_reader::read_config() {
	if (m_file == nullptr) {
		std::cerr << "Fatal error: Unable to read configuration file.\n";
		return;
	}

	bool is_grouping_symbols = false;
	bool is_operator_symbols = false;

	std::string line;
	while (m_file.getline(line)) {
		if (line.length() == 0 || line[0] == '#') {
			//This works because the length is guaranteed to be non-
			//negative.
			continue; //Because it is a comment
			//or some empty line
		}

		if (line.substring(0, 2) == "--") {

	}
}
