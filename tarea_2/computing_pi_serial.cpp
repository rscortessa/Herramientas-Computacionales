#include<random>
#include<iostream>
#include<vector>
int samples(int N);
int main ()
{
  int N;
  std::cout<<"Inserte valor de N "<<std::endl;
  std::cin>>N;
  int Nc=samples(N);
  double pi=Nc*4.0/N;
  std::cout<<pi<<std::endl;
}

int samples(int N)
{
    int count = 0;
    int seed = 1; // use pid for seed when in parallel
    std::mt19937 gen(seed);
    std::uniform_real_distribution<double> dis(-1.0, 1.0);
    for (int ii = 0; ii < N; ++ii) {
    double rx = dis(gen);
    double ry = dis(gen);
    if (rx*rx + ry*ry < 1)
      count++;
  }
  return count;
}
