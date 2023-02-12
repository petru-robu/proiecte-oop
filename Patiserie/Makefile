PROGRAM_NAME = Patiserie

CSTD = c++17

flags_all = -std=$(CSTD) -g -O0 -Wall -Wextra -fsanitize=address,undefined,signed-integer-overflow
flags_fast = -std=$(CSTD) -O2

INC_PARAMS = -Iinc/
SCR_PARAMS = src/*.cpp *.cpp

fast: $(sources)
	g++ $(flags_fast) $(INC_PARAMS) $(SCR_PARAMS) -o $(PROGRAM_NAME).out

all: $(sources)
	g++ $(flags_all) $(INC_PARAMS) $(SCR_PARAMS) -o $(PROGRAM_NAME).out

clean:
	del $(PROGRAM_NAME).out

run: $(sources)
	g++ $(flags_fast) $(INC_PARAMS) $(SCR_PARAMS) -o $(PROGRAM_NAME).out
	.\$(PROGRAM_NAME).out