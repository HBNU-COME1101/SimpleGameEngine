#pragma once

#include "agent_manager.hpp"
#include <vector>

class MyAgentManagerSTL: public AgentManager
{
    private:
       std::vector<Position> m_vPosition;
       
    private:
        Position do_not_use_it;
    public:
        MyAgentManagerSTL(){}
    
    public:
        virtual bool isEmptyWaypoint() const
        {
            if(m_vPosition.size() == 0)
                // return true when list is empty
                return true;
            else
                return false;
        }
    
        virtual Position& get_top()
        {
            // return true last element
            //return do_not_use_it; // must modify it
            if(!isEmptyWaypoint())
                return m_vPosition.back();
            else
                return do_not_use_it;
        }
    
        virtual Position get_next_waypoint()
        {
            // return last element and remove last element
            Position pos = m_vPosition.back();
            m_vPosition.pop_back();
            return pos;
        }
    
        virtual void insert_waypoint(Position pos)
        {
            m_vPosition.push_back(pos);
        }
};