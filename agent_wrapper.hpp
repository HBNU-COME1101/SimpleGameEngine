#pragma once

#include "my_agent.hpp"
#include "utils.hpp"

class AgentW: public MyAgent
{
public:
  AgentW(double x, double y):MyAgent(x, y)
  {

  }

public:
  virtual bool move(const Position& dest_loc)
  {
    prev_loc = cur_loc;

    MyAgent::move(dest_loc);
    
    check(cur_loc, prev_loc);
    
    if(delta(cur_loc, dest_loc) < 0.1)
      return true;
     
    return false;
  }
};