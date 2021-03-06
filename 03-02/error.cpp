#include<iostream>
#include<cmath>
int main()
{
  std::cout.precision(7);
  float x=1.5*std::pow(10,38);
  float y=-1.5*std::pow(10,38);
  float z=1;
  std::cout<<(x+y)+z<<std::endl;
  std::cout<<(x+z)+y<<std::endl;
  return 0;
}
