#pragma once

#include "agent_manager.hpp"
/*
    TODO: add header file
*/
class MyAgentManagerSTL: public AgentManager
{
    private:
    /*
        TODO: add attributes
    */
    private:
        Position do_not_use_it;
    public:
        MyAgentManagerSTL(){}

    public:
        virtual bool isEmptyWaypoint() const
        {
            // return true when list is empty
            return true;
        }

        virtual Position& get_front()
        {
            // return true first element
            return do_not_use_it; // must modify it
        }

        virtual Position get_next_waypoint()
        {
            // return first element and remove front element
            return Position(); // must modify it
        }

        virtual void insert_waypoint(Position pos)
        {
            // insert position element 
        }
};