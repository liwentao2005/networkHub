#include "poller/EPollPoller.h"

using namespace didido;
using namespace didido::net;

Poller::Poller(EventLoop* loop)
    : ownerLoop_(loop)
{

}

Poller::~Poller() = default;

