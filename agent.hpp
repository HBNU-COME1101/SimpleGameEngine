#pragma once
#include <iostream>
#include <vector>
#include <cmath>

#include "position.hpp"

typedef std::vector<Position> Waypoints;

class Agent{
protected:
  Position cur_loc;
  Position prev_loc;
  
public:
  Agent(double x, double y)
  :cur_loc(x, y), prev_loc(x, y)
  {}

public:
  void print_cur_loc(std::ostream& out)
  {
    out << "(" << cur_loc.get_x() 
       << ", " << cur_loc.get_y() << ")" << std::endl;
  }

  void print_prev_loc(std::ostream& out)
  {
    out << "(" << prev_loc.get_x() 
       << ", " << prev_loc.get_y() << ")" << std::endl;
  }

  double get_delta()
  {
    Position delta = cur_loc-prev_loc;
    return pow(pow(delta.get_x(), 2)+pow(delta.get_y(), 2), 0.5);
  }

public:
  virtual bool move(const Position& destination) = 0;  
};