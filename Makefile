#Makefile for Library Model

CXXFLAGs += --std=C++11

all: main

debug: CXXFLAGS += -g
debug: main

rebuild: clean main

main: main.o robot_model.o
$(CXX) $(CXXFLAGS) main.o robot_model.o
#arm.o battery.o head.o torso.o robot_part.o

main.o: main.cpp robot_model.cpp robot_part.cpp locomotor.h battery.h torso.h head.h arm.h
$(CXX) $(CXXFLAGS) -c main.cpp

robot_model.o: robot_model.cpp robot_model.h
$(CXX) $(CXXFLAGS) -c robot_model.cpp

clean:
-rm -f *.o *~ a.out
