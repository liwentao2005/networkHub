//
//g++ boost_test.cpp -std=c++11 -lboost_system -lboost_thread
#include "eventloop.h"

#include <iostream>
#include <poll.h>

using namespace didido;
using namespace didido::net;


EventLoop::EventLoop()
{

}

EventLoop::~EventLoop()
{
}

void EventLoop::loop()
{
    while(true)
    {
        std::cout << "poll ever 5s!" << std::endl;
        ::poll(NULL, 0, 5*1000);
    }

}

