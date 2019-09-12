//
//g++ boost_test.cpp -std=c++11 -lboost_system -lboost_thread
#ifndef EVENTLOOP_H
#define EVENTLOOP_H

#include <atomic>
#include <iostream>
#include <functional>
#include <memory>

namespace didido
{
namespace net
{

class Poller;

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
