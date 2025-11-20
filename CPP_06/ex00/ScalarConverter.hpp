#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
class ScalarConverter
{
    ScalarConverter();
    ScalarConverter(const ScalarConverter &other);
    ~ScalarConverter();
    ScalarConverter& operator=(const ScalarConverter &other);
    public:
            static void convert(std :: string str);
};
int check_if_double(std :: string str);
int check_dots(std :: string str);
int check_if_int(std :: string str);
int check_alpha(std :: string str);
void convert_char(double i, double d, float f, char c);
void convert_int(double i, double d, float f, char c);
void convert_float(double i, double d, float f, char c);
void convert_double(double i, double d, float f, char c);
void prind_invalid();
int handle_literals(std :: string str);
#endif