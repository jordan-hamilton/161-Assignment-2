# Source: http://web.engr.oregonstate.edu/~rookert/cs162/03.mp4

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = average.o change.o tempConvert.o
SRCS = average.cpp change.cpp tempConvert.cpp

all: average change tempConvert

average: average.o
	$(CXX) $(CXXFLAGS) average.o -o average

change: change.o
	$(CXX) $(CXXFLAGS) change.o -o change

tempConvert: tempConvert.o
	$(CXX) $(CXXFLAGS) tempConvert.o -o tempConvert

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $(@:.o=.cpp)

clean:
	rm *.o average change tempConvert
