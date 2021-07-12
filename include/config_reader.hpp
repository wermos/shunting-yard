#include <ifstream>
#include <string>

struct op {
	char op_char;
};

class config_reader {
	public:
		ConfigReader() = default;

		std::unordered_map<op, precedence> read_precendence_list(const std::string& file_name);
		std::unordered_map<op, assoc> read_assoc_list(const std::string& file_name);
	private:
		ifstream m_file;
		bool file_exists(const std::string& file_name) {
			ifstream test_file {"../config/config.txt"};
			return test_file.good();
		}
};
