#include <vector>
#include <iostream>
#include "position.hpp"
#include "agent_wrapper.hpp"
#include "agent_manager.hpp"

int main()
{
  #if 0
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
  #endif
  // Case III
  {
    AgentW ag(0, 0);
    
    AgentManager am = AgentManager();
    am.insert_waypoint(Position(10, 10));
    am.insert_waypoint(Position(10, 20));
    am.insert_waypoint(Position(20, 20));
    am.insert_waypoint(Position(30, 20));
      
    int i;
    Position cur_pos;
    for(i = 0; i < 1000000; i++)
    {
      cur_pos = am.get_front();
      if(am.isEmptyWaypoint() == false)
      {  
          if(ag.move(cur_pos))
          {
            std::cout <<"Position:" << cur_pos << "Reached" << std::endl;
            
            cur_pos = am.get_next_waypoint();
          }   
      }
      else{
          break;
      }
    }
    std::cout << "Loop Total:" << i+1 << std::endl;
  }
  return 0;
}