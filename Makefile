CXX = g++
OBJECTS = main.o robot_part.o 


Hw7_sprint1 : $(OBJECTS)
	$(CXX) -o $@ $(OBJECTS)
	
%.o : %.cpp
	$(CXX)  -c $<
	
clean :
	rm * .o
