#include <fstream>
#include <string>

class ConfigReader {
	public:
		ConfigReader() = default;

	private:
		ifstream m_file;
		bool file_exists(const std::string& file_name) {
			
		}
};
