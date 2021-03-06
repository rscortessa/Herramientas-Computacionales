#include<iostream>
#include<limits> //special library for limits in number representations, for more information visit: https://www.tutorialspoint.com/cpp_standard_library/limits.htm
#include<string>
void overflow(float x);
void overflowint(int x);
void print(float x);

int main()
{
  std::string answer;
  std::cout<<"Do you wanna choose float or int?\n";
  std::cin>>answer;
  if(answer=="float")
    {
      overflow(1);
    }
  else{
  if(answer=="int")
    {
      overflowint(1);
    }
  else
    {
      std::cout<<"Speak well madre foca\n";
    }
  }  
  return 0;
}

void overflow(float x)
{
  float m=1;
  x=m;
  while(x>0 && x!=std::numeric_limits<float>::infinity())
    {
      m=x;
      x*=2;
      print(x);

    }
  std::cout<<"This is the largest float="<<m<<"\n";
  x=1;
  m=1;
  while(x>0 && x!=std::numeric_limits<float>::infinity())
    {
      m=x;
      x/=2;
      print(x);

    }
  std::cout<<"This is the lowest float="<<m<<"\n";
}

void overflowint(int x)
{
  int m=1;
  x=m;
  while(x>0 && x!=std::numeric_limits<float>::infinity())
    {
      m=x;
      x*=2;
      print(x);

    }
  std::cout<<"This is the largest int="<<m<<"\n";
  x=1;
  m=1;
  while(x>0 && x!=std::numeric_limits<float>::infinity())
    {
      m=x;
      x/=2;
      print(x);
    }
  std::cout<<"This is the lowest int="<<m<<"\n";
}
void print(float x)
{
  std::cout<<"x="<<x<<"\n";

}
