#include <fstream>
#include <string>

struct op {
	char op_char;
};

class ConfigReader {
	public:
		ConfigReader() = default;

		std::unordered_map<op, precedence> read_precendence_list(const std::string& file_name);
		std::unordered_map<op, assoc> read_assoc_list(const std::string& file_name);
	private:
		ifstream m_file;
		bool file_exists(const std::string& file_name) {
			m_file("../config/config.txt");
			return f.good();
		}
};
