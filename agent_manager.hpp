#pragma once

#include <list>
#include "position.hpp"

class AgentManager{
    private:
        std::list<Position> m_waypoints;
    
    public:
        AgentManager(){};
        virtual ~AgentManager(){}
    public:
        virtual bool isEmptyWaypoint() const = 0;
    
        virtual Position& get_front() = 0;
    
        virtual Position get_next_waypoint() = 0;
    
        virtual void insert_waypoint(Position pos) = 0;
};