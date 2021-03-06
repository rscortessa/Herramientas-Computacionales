#include<iostream>

int main ()
{
  std::cout.precision(16);
  std::cout<<"up"<<" "<<"down "<<"i"<<std::endl;
  double up=0;
  double down=0;
  for (double n=1;n<1000;n++)
    {
  for(double i=1;i<n;i++)
    {
      up+=1/i;
      down+=1/(n-i);
    }
  std::cout<<up<<" "<<down<<" "<<n<<std::endl;
    }

  return 0;
}
