#ifndef NET_POLLER_EPOLLPOLLER_H
#define NET_POLLER_EPOLLPOLLER_H

#include "../Poller.h"

namespace didido
{
namespace net
{

class EPollPoller : public Poller
{
public:
    EPollPoller(EventLoop* loop);
    ~EPollPoller() override;
    int poll(int timeoutMs, int activeChannels) override;

private:
    int epollfd_;
};

}
}
#endif
