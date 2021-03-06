#include<iostream>
int main()
{
  std::cout.precision(7);
  float x=0;
  for(int i=0;i<100;i++)
    {
      x+=0.01;
 
    }
  float y=1;
    std::cout<<x<<" "<<y<<std::endl;
  return 0;
  
}
