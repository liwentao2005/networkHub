#ifndef NET_POLLER_H
#define NET_POLLER_H

//#include "../eventloop.h"

namespace didido
{
namespace net
{

class EventLoop;

class Poller
{
public:
    Poller(EventLoop* loop);
    virtual ~Poller();

    virtual int poll(int timeoutMs, int activeChannels) = 0;

    static Poller* newDefaultPoller(EventLoop* loop);
private:
    EventLoop* ownerLoop_;
};

}
}
#endif
