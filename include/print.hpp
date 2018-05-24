#include <string>
#include <fstream>
#include <iostream>
/** @brief  Вывод строки на экран
    @param  Принимает ссылку на строку text и ссылку на поток вывода out
*/
void print(const std::string& text, std::ostream& out = std::cout);
/** @brief  Вывод строки в файл
    @param  Принимает на вход ссылку на строку text,и ссылку на поток вывода в файл out
*/
void print(const std::string& text, std::ofstream& out);
