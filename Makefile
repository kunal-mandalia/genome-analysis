CC=gcc
CFLAGS=-I/usr/include/gsl
LDFLAGS=-lgsl -lgslcblas -lm
CC=gcc
SRC_FILES = $(wildcard src/*.c)
TEST_SRC_FILES = $(filter-out src/main.c, $(SRC_FILES)) ${wildcard test/*.test.c}
.PHONY: build test leak temp

all: clean build run

clean:
	rm -rf ./build/genome-sequencer.out

build:
	$(CC) -Wall -o ./build/genome-sequencer.out $(SRC_FILES) $(LDFLAGS)

run:
	./build/genome-sequencer.out

disassemble:
	otool -tvV ./build/genome-sequencer.out

test:
	$(CC) -Wall -o ./test/test.out ./test/runner.c $(TEST_SRC_FILES) $(LDFLAGS) -lcheck -I ./test/
	./test/test.out

leak:
	$(CC) -Wall -ggdb -o ./test/genome-sequencer-leak.out $(SRC_FILES) -fsanitize=address -fno-omit-frame-pointer $(LDFLAGS)
	./test/genome-sequencer-leak.out

check-leak:
	valgrind --leak-check=full --show-leak-kinds=all ./build/genome-sequencer.out

temp:
	$(CC) -Wall -o ./build/temp.out ./temp/main.c $(LDFLAGS)
	./build/temp.out
