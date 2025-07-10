#include <iostream>
#include <regex>
int main()
{
    std::string str = "adsakfj2512889764@qq.com s4adfasf889764@qq.com";
    std::smatch sma;
    std::regex parrent ("[0-9]+@\\w+.\\w+");
    for (std::sregex_iterator it(str.begin(),str.end(),parrent),end;it != end;it++)
    {
        sma = *it;
        endl(std::cout<<sma.str(0));
    }
}