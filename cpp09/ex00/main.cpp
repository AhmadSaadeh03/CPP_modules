#include "BitcoinExchange.hpp"

int main(int argc , char **argv)
{
    std :: string file,line,csv_file;

    if (argc != 2)
    {
        std :: cout << "Error\nthe number of arg is wrong" << std :: endl;
        return 1;
    }
    file = argv[1];
    int dot = file.find(".");
    if (dot <= 0)
    {
        std :: cout << "invalid extenstion" << std :: endl;
        return 1;
    }
    std :: string extenstion =  file.substr(dot);
    if (extenstion != ".txt" || extenstion.size() != 4)
    {
        std :: cout << "invalid extenstion" << std :: endl;
        return 1;
    }
    std :: ifstream f(file.c_str());
    if(!f.is_open())
    {
        std :: cout << "cannot open the file" << std :: endl;
        return 1;
    }
    BitcoinExchange a;
    if (!a.read_csv())
        return 1;
    a.handle_txt(f);


}
