#include "EPollPoller.h"

using namespace didido::net;

EPollPoller::EPollPoller(EventLoop* loop)
    : Poller(loop)
{

}

EPollPoller::~EPollPoller()
{
    
}

int EPollPoller::poll(int timeoutMs, int activeChannels)
{
    return 1000;
}
