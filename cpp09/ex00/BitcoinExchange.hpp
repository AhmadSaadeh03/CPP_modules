#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include<fstream>
#include <cstdlib>
#include <map>
#include <string>
class BitcoinExchange
{
private:
        std :: map<std :: string , float> m;

public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange& operator=(const BitcoinExchange &other);
    int read_csv();
    
};
#endif