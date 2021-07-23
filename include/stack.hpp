template <typename T>
class stack<T> {
	public:
		stack() : m_index {-1};

		T& pop() {
			if (index == -1) {
				std::cerr << "Stack underflow: The stack is empty!\n";
				//we used a newline character instead of std::endl
				//because we don't need to flush the buffer.
			} else {
				return m_data[index--];
				//first m_data[index] is returned, and then index is
				//decremented by 1
			}
		}
			
		void push(const T& data) {
			m_data.push_back(data);
			m_index++;
		}

	private:
		std::vector<T&> m_data {10}; //default capacity
		int m_index;
};
