#include <iostream>
#include <fstream>
#include <string>

static void replace(std::string &s1, std::string &s2, std::ifstream &ifs, std::ofstream &ofs)
{
    std::string line;
    
    while (std::getline(ifs, line, '\n'))
    {
        for(size_t i = 0; i < line.length();)
        {
            if (!line.compare(i, s1.length(), s1))
            {
                ofs << s2;
                i += s1.length();
            }  
            else
            {
                ofs << line.substr(i, 1);
                i++;
            }
                
        }
        ofs << "\n";
    }
}

static int  checkArgs(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Invalid number of arguments" << std::endl;
        return (0);
    }
    
    std::string fileName(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    if (fileName.empty() || s1.empty() || s2.empty())
    {
        std::cout << "Cant process empty arguments" << std::endl;
        return (0);
    }

    std::string     filename(argv[1]);
    std::ifstream   ifs;
    ifs.open(filename, std::ifstream::in);
    if (!ifs.is_open())
    {
        std::cout << "Couldn´t open input file" << std::endl;
        return (0);
    }

    std::string     outFile(argv[1]);
    std::ofstream   ofs;
    
    ofs.open(outFile.append(".replace"), std::ofstream::out | std::ofstream::trunc);
    if (!ofs.is_open())
    {
        std::cout << "Couldn´t open output file" << std::endl;
        return (0);
    }

    replace(s1, s2, ifs, ofs);

    ifs.close();
    ofs.close();

    return (1);
}



int main(int argc, char **argv)
{
    if (!checkArgs(argc, argv))
        return (0);  
    return (1);
}
       