#pragma once
#include <iostream>

double delta(const Position& x, const Position& y)
{
  Position dlt = x - y;
  return pow(pow(dlt.get_x(), 2)+pow(dlt.get_y(), 2), 0.5);
}

void check(const Position& x, const Position& y)
{
  Position dlt = x - y;
  double delta =  pow(pow(dlt.get_x(), 2)+pow(dlt.get_y(), 2), 0.5);

  if(delta > 1)
    std::cout << "Cheated" << std::endl;
}