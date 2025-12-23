#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include<fstream>
#include <cstdlib>
#include <map>
#include <algorithm>
#include <string>
class BitcoinExchange
{
private:
        std :: map<std :: string , float> m;
        std :: string txtfile;

public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange& operator=(const BitcoinExchange &other);
    int read_csv();
    int handle_txt( std :: ifstream &f);
    int validation(std :: string &date , std :: string &value);
    int trim_date(std :: string &date);
    int is_number(std :: string nums);
};
#endif