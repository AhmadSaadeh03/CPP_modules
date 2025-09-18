
#include "sedforlosers.hpp"
int main (int argc , char **argv)
{
    if (argc != 4)
    {
        std :: cerr << "Error\nnumber of argument" << std :: endl;
        return 1;
    }
    std :: string filename = argv[1];
    std :: ifstream in_file(filename.c_str());
    if (!in_file)
    {
        std :: cerr << "Error\non opening file\n";
        return 1;
    }
    int dot = filename.find(".");
    filename = filename.substr(0,dot); // first --> 0 last --> dot-1
    filename+=".replace";
    std :: ofstream out_file(filename.c_str());
    std :: string s1,s2,sfile;
    s1 = argv[2];
    s2 = argv[3];
    while(std :: getline(in_file,sfile))
    {
        find_occ(sfile,s1,s2);
        if (!in_file.eof())
            sfile+='\n';   
        out_file << sfile;
    }
    return 0; // the destructor of i/o fstream close files
}
