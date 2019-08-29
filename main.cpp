#include "eventloop.h"

#include <iostream>
#include <poll.h>


using namespace didido;
using namespace didido::net;


int main(void)
{
    EventLoop loop;

    loop.loop();

    return 0;
}

