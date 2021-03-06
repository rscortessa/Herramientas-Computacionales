#include<iostream>
#include<cmath>
double solve1(double b,double a,double c);
double solve2(double b,double a,double c);

int main()
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(16);
  std::cout<<"Fórmula 1"<<std::endl;
  for(int i=0;i<9;i++)
    {
      std::cout<<"Fórmula 1="<<solve1(1,1,std::pow(10,-i))<<"Fórmula 2="<<solve2(1,1,std::pow(10,-i))<<std::endl;
    }
  return 0;
}
double solve1(double b,double a,double c)
{
  return (-b+std::pow(b*b-4*a*c,1/2))/(2*a);
}
double solve2(double b, double a, double c)
{
  return (-2*c/(b-b*std::pow(b*b-4*a*c,1/2)));
}
