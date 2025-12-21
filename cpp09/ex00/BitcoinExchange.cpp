#include "BitcoinExchange.hpp"

BitcoinExchange :: BitcoinExchange()
{
    std :: cout << "Default constructor called" << std :: endl;
}
BitcoinExchange :: ~BitcoinExchange()
{
    std :: cout << "Destructor called" << std :: endl;
}
BitcoinExchange :: BitcoinExchange(const BitcoinExchange &other)
{
    this->m = other.m;
    std :: cout << "Copy constructor called" << std :: endl;
}
BitcoinExchange& BitcoinExchange ::  operator=(const BitcoinExchange &other)
{
    if(this != &other)
    {
        std :: cout << "copy assignment called" << std :: endl;
        this->m = other.m;
    }
    return *this;
}

int BitcoinExchange :: read_csv()
{
    std :: string csvstring,line;
    std :: ifstream csv("data.csv");
    if(!csv.is_open())
    {
        std :: cout << "cannot open the file" << std :: endl;
        return 0;
    }
    getline(csv,line);
    while (getline(csv,line))
    {
        int del = line.find(',');
    //    m.insert({ line.substr(0,del), atof(line.substr(del+1).c_str())});
        m.insert(std::make_pair(line.substr(0, del),atof(line.substr(del + 1).c_str())));
    }
    return 1;
    
}