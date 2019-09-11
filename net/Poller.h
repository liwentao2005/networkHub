#ifndef NET_POLLER_H
#define NET_POLLER_H

#include "../eventloop.h"
namespace didido
{
namespace net
{

class Poller
{
private:
    EventLoop* ownerLoop_;
};

}
}
#endif
