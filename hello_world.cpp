#include <iostream>  // Для ввода/вывода
#include <string>    // Для работы со строками

int main() {
    std::string name;  // Переменная для хранения имени пользователя
    
    // Запрос имени у пользователя
    std::cout << "Enter your name: ";
    std::cin >> name;
    
    // Вывод приветствия
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
