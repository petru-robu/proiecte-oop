PROGRAM_NAME = Patiserie

CSTD = c++17

flags_all = -std=$(CSTD) -g -O0 -Wall -Wextra -fsanitize=address,undefined,signed-integer-overflow
flags_fast = -std=$(CSTD) -O2

INC_PARAMS = -Iinc/global/ -Iinc/util/ -Iinc/core/material/ -Iinc/core/product/ -Iinc/core/storage
SCR_PARAMS = src/global/*.cpp src/util/*.cpp src/core/material/*.cpp src/core/product/*.cpp src/core/storage/*.cpp *.cpp

fast: $(sources)
	g++ $(flags_fast) $(INC_PARAMS) $(SCR_PARAMS) -o $(PROGRAM_NAME).out

all: $(sources)
	g++ $(flags_all) $(INC_PARAMS) $(SCR_PARAMS) -o $(PROGRAM_NAME).out

clean:
	del $(PROGRAM_NAME).out
	
exec:
	.\$(PROGRAM_NAME).out