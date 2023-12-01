#pragma once
#include <iostream>

class Position{
private:
  double m_x;
  double m_y;

public:
  Position()
  :m_x(0), m_y(0){}

  Position(double x, double y)
  :m_x(x), m_y(y){}

  Position(const Position& rhs)
  {
    m_x = rhs.m_x;
    m_y = rhs.m_y;
  }

  const Position& operator=(const Position& rhs)
  {
    if(this != &rhs)
    {
      m_x = rhs.m_x;
      m_y = rhs.m_y;
    }
    return *this;
  }

public:
  double get_x() const { return m_x;}
  double get_y() const { return m_y;}

  void set_x(double x) { m_x = x;}
  void set_y(double y) { m_y = y;}

public:
  void print(std::ostream& out){ out << "(" << m_x << ", " << m_y << ")" << std::endl;}
};

Position operator-(const Position& lhs, const Position& rhs)
{
  return Position(lhs.get_x()-rhs.get_x(), lhs.get_y()-rhs.get_y());
}

std::ostream& operator<<(std::ostream& out, Position& rhs)
{
  rhs.print(out);
  return out;
}