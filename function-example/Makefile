CC = g++
CXXFLAGS = -std=c++17 -Wall -o
OBJ = function-example
all: ${OBJ}
${OBJ}: object_function-example
	${CC} ${CXXFLAGS} $@ $@.o
object_function-example:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
