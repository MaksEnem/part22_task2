#include <iostream>
#include <string>
#include <map>

int main() {

	std::multimap <std::string, int> queueMap;

	std::string surname;
	int number_in_line = 0;
	
	bool is_run = 1;
	std::string program_execution;
	while (is_run) {
		
		std::cout << "Enter last name: ";
		std::cin >> surname;

		if (surname != "Next") {
						
			queueMap.emplace(surname, number_in_line);			
			++number_in_line;

		}
		else if (surname == "Next") {

			std::map<std::string, int>::iterator it = queueMap.begin();			
			std::cout << it->first << " " << it->second << std::endl;
			
			queueMap.erase(it);

		}
				
		std::cout << "To end the program, enter yes, to continue the program, press any key: ";
		std::cin >> program_execution;

		if (program_execution == "yes" || program_execution == "Yes") {

			is_run = 0;

		}		
	}
}