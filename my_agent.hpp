#pragma once

#include <iostream>

#include "agent.hpp"
#include "utils.hpp"

class MyAgent:public Agent
{
public:
  MyAgent(double x, double y):Agent(x, y)
  {

  }

public:
  virtual bool move(const Position& dest_loc)
  {
    double d_x = dest_loc.get_x() - cur_loc.get_x();
    double d_y = dest_loc.get_y() - cur_loc.get_y();

    if(d_x > 0)
      cur_loc.set_x(cur_loc.get_x() + 1);
    else
    {
      if(d_y > 0)
        cur_loc.set_y(cur_loc.get_y() + 1);
    }
        
    return true;
  }
};