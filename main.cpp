#include <iostream>
#include <regex>
template<class...Args>
void printt(Args&&...args)
{
    std::cout<<sizeof...(args)<<std::endl;
    // (std::cout<<...<<args);
    ((std::cout<<args<<","),...);
}

int main()
{
    std::string str = "adsakfj2512889764@qq.com s4adfasf889764@qq.com";
    std::smatch sma;
    std::regex parrent ("([0-9]+)@(\\w+)(.\\w+)");
    for (std::sregex_iterator it(str.begin(),str.end(),parrent),end;it != end;it++)
    {
        sma = *it;
        endl(std::cout<<sma.str(0));
    }
    std::string replace= std::regex_replace(str,parrent,"$1##$2$3");
    std::cout<<replace<<std::endl;
    printt(12,"²âÊÔÈÕÖ¾",2.4);
}