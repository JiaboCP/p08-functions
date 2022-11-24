CC = g++
CXXFLAGS = -std=c++17 -Wall -o
OBJ = triangle-area
all: ${OBJ}
${OBJ}: object_triangle-area
	${CC} ${CXXFLAGS} $@ $@.o
object_triangle-area:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
