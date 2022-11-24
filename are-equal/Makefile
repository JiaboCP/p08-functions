CC = g++
CXXFLAGS = -std=c++17 -Wall -o
OBJ = are-equal
all: ${OBJ}
${OBJ}: object_are-equal
	${CC} ${CXXFLAGS} $@ $@.o
object_are-equal:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
