#include <vector>
#include <iostream>
#include "position.hpp"
#include "agent_wrapper.hpp"

int main()
{

  // Case I
  {
    AgentW ag(0, 0);

    int i;
    for(i = 0; i < 1000000; i++)
    {
      if(ag.move(Position(10,10)))
      {
        std::cout << "Reached" << std::endl;
        break;
      }
    }
    std::cout << "Loop Total:" << i+1 << std::endl;
  }
  
  // Case II
  {
    AgentW ag(0, 0);

    int i;
    for(i = 0; i < 1000000; i++)
    {
      if(ag.move(Position(-10,-10)))
      {
        std::cout << "Reached" << std::endl;
        break;
      }
    }
    std::cout << "Loop Total:" << i+1 << std::endl;
  }

  // Case III
  {
    AgentW ag(0, 0);
    
    int i;
    for(i = 0; i < 1000000; i++)
    {
      if(ag.move(Position(100.5,100)))
      {
        std::cout << "Reached" << std::endl;
        break;
      }
    }
    std::cout << "Loop Total:" << i+1 << std::endl;
  }   
  return 0;
}