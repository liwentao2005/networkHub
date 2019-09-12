#include "../Poller.h"
#include "EPollPoller.h"

using namespace didido::net;

Poller* Poller::newDefaultPoller(EventLoop* loop)
{
    return new EPollPoller(loop);
}
