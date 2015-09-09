CXX = g++
CXXFLAGS = -Wall -MMD -std=c++0x

OBJECTS = main.o
DEPENDS = $(OBJECTS:.o=.d)


EXEC = Euler.exe

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXEC)

-include $(DEPENDS)

clean:
	rm -rf $(DEPENDS) $(OBJECTS) $(EXEC)