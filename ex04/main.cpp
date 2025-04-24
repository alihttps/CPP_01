#include <iostream>
#include <fstream>

void search_n_replace (std::string &buffer, std::string s1, std::string s2)
{
    (void)s2;
    size_t i = 0;
    while (1)
    {
        size_t pos = buffer.find(s1, i);
        if(pos == std::string::npos)
            break;
        buffer.erase(pos, s1.length());
        buffer.insert(pos , s2);
        i = pos + s2.length();
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    
    std::ifstream infile(av[1]);
    if (!infile.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }

    std::string buffer;
    std::string line;
    while (std::getline(infile, line))
    {
        buffer += line;
        if (!infile.eof())
            buffer += "\n";
    }
    search_n_replace(buffer, av[2], av[3]);
    std::ofstream outfile((std::string(av[1]) + ".replace").c_str());
    outfile << buffer;
    infile.close();
    outfile.close();
    return 0;
}