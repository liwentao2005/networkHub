# Point to your Boost top level directory
BOOST_ROOT = /usr/include/boost

# Hardcode compiler
CXX := g++

CFLAGS = -Wall -c
#CXXFLAGS := -std=c++11 -I$(BOOST_ROOT)
CXXFLAGS := -c -g -std=c++11 -I./net/poller -I./net
#LDFLAGS := -lboost_thread -lboost_syste
LDFLAGS :=

srcs := $(wildcard ./*.cpp)
srcs += $(wildcard ./net/test/*.cpp)
srcs += $(wildcard ./net/poller/*.cpp)
srcs += $(wildcard ./net/*.cpp)
objs := $(patsubst %.cpp,%.o,$(srcs))

all: main

main: $(objs)
	@echo "srcs:" $(srcs)
	@echo "objs:" $(objs)
	$(CXX) $^ -o $@

$(objs):%.o : %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f main $(srcs:.cpp=.o)
