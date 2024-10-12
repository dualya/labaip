#include <iostream>
int main()
{
  int a=0;
  std::cin>>a;
  if (std::cin.good())
  {
    std::cerr<<"good!\n";
  }
  else if (std::cin.eof())
  {
    std::cerr<<"eof!\n";
  }
  else if (std::cin.bad())
  {
    std::cerr<<"bad!\n";
  }
  else if (std::cin.fail())
  {
    std::cerr<<"fail!\n";
  }
  std::cout<<a;
  std::cout<<"\n";
}
