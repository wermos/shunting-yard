#include <ifstream>
#include <string>

struct op {
	char op_char;
};

enum assoc : unsigned char { //Saving memory by using the smallest (portable) data type
	                     //possible
	LASSOC,
	RASSOC,
	NASSOC
};

class config_reader {
	public:
		config_reader() {
			std::string file_name {"../config/config.txt"};
			if (!file_exists(file_name)) {
				std::cerr << "Fatal error: Configuration file not found.\n";
				std::cerr << "Make sure that a file called \"config.txt\""
					  << " exists in a directory called \"config\","
					  << "which in turn must be in the root directory"
					  << "of the project.\n";
			} else {
				m_file {file_name};
			}
		}

		auto read_config();
	private:
		ifstream m_file = nullptr;
		bool file_exists(const std::string& file_name) {
			ifstream test_file {"../config/config.txt"};
			return test_file.good();
		}
};
