CC = g++
CXXFLAGS = -std=c++17 -Wall -o
OBJ = random_numbers
all: ${OBJ}
${OBJ}: object_random_numbers
	${CC} ${CXXFLAGS} $@ $@.o
object_random_numbers:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
