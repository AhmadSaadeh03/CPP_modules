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
int BitcoinExchange :: handle_txt( std :: ifstream &f)
{
    std :: string temp,line,date,value;
    getline(f,line);
    if(line != "date | value")
    {
        std :: cout << "Error : bad input : => " << line << std :: endl;
        return 0;
    }
    while (getline(f,line))
    {
        int del = line.find('|');
        if(del < 0)
        {
            std :: cout << "Error : bad input => " << line << std :: endl;
            continue;
        }
        date = line.substr(0,del);
        value = line.substr(del);
        validation(date,value);
    }
    
return 1;

}
int BitcoinExchange :: validation(std :: string &date , std :: string &value)
{
    int date_space = date.size() -1;
    int value_space = value.size() -2;
    if(date[date_space]!= ' ' || value[value_space] != ' ')
    {
        std :: cout << "Error : bad input => " << date << std :: endl;
        return 0;
    }
    if (!trim_date(date))
    {
          std :: cout << "Error : bad input => " << date << std :: endl;
          return 0;
    }
    return 1;
}
int BitcoinExchange :: trim_date(std :: string &date)
{
    std :: string year,month,day;
    int del = date.find('-');
    year = date.substr(0,del);
    month = date.substr(del+1,2);
    day = date.substr(date.size()-3 , 2);
    if (year.size() != 4 || month.size() != 2 || day.size() != 2)
        return 0;
    if (!is_number(year) || !is_number(month) || !is_number(day))
        return 0;
    if(atoi(day.c_str()) > 31 || atoi(month.c_str()) > 12 || day[1] == '0' || month[1] == '0' || year[0] == '0')
        return 0;
    
    return 1;
}

int BitcoinExchange :: is_number(std :: string date)
{
    for (size_t i = 0; i < date.size(); i++)
    {
        if(!isdigit(date[i]))
            return 0;
    }
    return 1;
    
}