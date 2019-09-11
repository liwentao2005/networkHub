//
//g++ boost_test.cpp -std=c++11 -lboost_system -lboost_thread
#ifndef EVENTLOOP_H
#define EVENTLOOP_H

#include <atomic>
#include <iostream>
#include <functional>

namespace didido
{
namespace net
{

class EventLoop
{
public:
    typedef std::function<void()> Functor;

    EventLoop();
    ~EventLoop();

    void loop();

    void quit();

private:
    std::atomic<bool> quit_;
    std::unique_ptr<Poller> poller_;

};

}
}

#endif
