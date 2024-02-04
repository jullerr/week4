#include <iostream>
#include <string>

class Application {
public:
int run() {
std::string input;
std::cout << "Введите число: ";
std::cin >> input;

int number = convertToInt(input);
double decimal = convertToDouble(input);
char character = convertToChar(input);

std::cout << "Целое число: " << number << std::endl;
std::cout << "Десятичное число: " << decimal << std::endl;
std::cout << "Символ: " << character << std::endl;

return 0;
}

private:
int convertToInt(const std::string& input) {
return std::stoi(input);
}

double convertToDouble(const std::string& input) {
return std::stod(input);
}

char convertToChar(const std::string& input) {
return input[0];
}
};

int main() {
Application application;
return application.run();
}
