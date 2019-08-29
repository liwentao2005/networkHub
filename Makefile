# Point to your Boost top level directory
BOOST_ROOT = /usr/include/boost

# Hardcode compiler
CXX := g++

CFLAGS = -Wall -c
#CXXFLAGS := -std=c++11 -I$(BOOST_ROOT)
CXXFLAGS := -c -std=c++11
#LDFLAGS := -lboost_thread -lboost_syste
LDFLAGS :=

src := $(wildcard ./*.cpp)
objs := $(patsubst %.cpp,%.o,$(src))

all: main

main: $(objs)
	$(CXX) $^ -o $@

$(objs):%.o : %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f main $(src:.cpp=.o)
