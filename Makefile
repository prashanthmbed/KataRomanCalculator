THE_TESTS	=  Test_RomanArithmetic
THE_LIBRARY	=  RomanArithmetic.a
THE_PROGRAM	=  RomanArith

CFLAGS		+= -g -O0 -Wall -Werror -Wextra -std=c99
TEST_CFLAGS	:= $(shell pkg-config --cflags check)
TEST_LIBS	:= $(shell pkg-config --libs check)
TEST_LIBS	+= -lm

SILENT		=  @

all: check

check: ${THE_TESTS}
	${SILENT}./${THE_TESTS}

valgrind: ${THE_TESTS}
	${SILENT}valgrind --leak-check=full --show-leak-kinds=all ./${THE_TESTS}

clean:
	${SILENT}rm -f *.o ${THE_TESTS} ${THE_LIBRARY} ${THE_PROGRAM}
	${SILENT}rm -rf *.dSYM

.PHONY: all check valgrind clean

${THE_TESTS}: ${THE_LIBRARY} test/Test_RomanArithmetic.cpp
	${SILENT}${CC} ${CFLAGS} ${TEST_CFLAGS} -o ${THE_TESTS} test/Test_RomanArithmetic.cpp ${TEST_LIBS} ${THE_LIBRARY}

${THE_LIBRARY}: ./src/RomanArithmetic.cpp
	${SILENT}${CC} ${CFLAGS} -c ./src/RomanArithmetic.cpp
	${SILENT}ar rc ${THE_LIBRARY} ./src/RomanArithmetic.o
	${SILENT}ranlib ${THE_LIBRARY}

${THE_PROGRAM}: ${THE_LIBRARY} ./src/RomanArithmetic.c
	${SILENT}${CC} ${CFLAGS} -o ${THE_PROGRAM} ./src/RomanArithmetic.c ${THE_LIBRARY}
