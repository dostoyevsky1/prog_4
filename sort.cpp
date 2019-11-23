#include <iostream>
#include "sort_helper.h"

int main()
{

double l0[100];

int size = GetData(l0);
char order;

double l1[size];

for(int i = 0; i < size; i++)
{
    l1[i] = l0[i];
    
}

std::cout << std::endl <<
             "Would you like to sort in Ascending(A/a) or Descending(D,d) order?" <<
             std::endl;
std::cin >> order;
Sort(l1, size, order);

std::cout << std::endl << "N" << "\t" << "Square" << "\t" << "Square Root" << std::endl;

for(int i = 0; i < size; i++)
{
     std::cout << l1[i] << 
                  "\t" <<
                  Power(l1[i],2) <<
                  "\t" <<
                  Sqrt(l1[i]) <<
                  std::endl;
}

    return 0;
}