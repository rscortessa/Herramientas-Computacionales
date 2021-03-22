#include<iostream>
#include<string>
int main()
{
  std::string name;
  std::string lastname;
  std::cout<<"¿Como te llamas?\n";
  std::cin>>name>>lastname;
  std::cout<<"Hola "<<name<<"ito"<<" "<<lastname<<std::endl;
  std::cout<<name.size()<<std::endl;
  std::string f="5.1";
  double x=std::stod(f);
  std::cout<<x*2<<std::endl;

  return 0;
}
