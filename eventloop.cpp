//
//g++ boost_test.cpp -std=c++11 -lboost_system -lboost_thread
#include "eventloop.h"
#include "net/poller/EPollPoller.h"

#include <iostream>
#include <poll.h>

using namespace didido;
using namespace didido::net;


EventLoop::EventLoop()
    : quit_(false),
    poller_(Poller::newDefaultPoller(this))
{

}

EventLoop::~EventLoop()
{
}

void EventLoop::loop()
{
    quit_ = false;
    while(!quit_)
    {
        std::cout << "poll ever 5s!" << std::endl;
        int events = poller_->poll(1000, 100);
        ::poll(NULL, 0, 5*1000);
        std::cout << "poll events: %d!" << events << std::endl;
    }

}

void EventLoop::quit()
{
    quit_ = true;
}

