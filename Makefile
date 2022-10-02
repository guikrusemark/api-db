CC := g++
CFLAGS_ALL := -g -Wall -O3 -std=c++11 -I include/
CFLAGS_COMPILE := -g -Wall -O3 -std=c++11 -I include/ -c

SRC_DIR := src
BUILD_DIR := build
TARGET := main.out

all: main.out

execute: main.out
	./main.out

main.out: database.o table.o
	$(CC) $(CFLAGS_ALL) $(BUILD_DIR)/dao/*.o $(SRC_DIR)/main.cpp -o $(TARGET)

database.o: table.o
	@mkdir -p $(BUILD_DIR)/dao/
	$(CC) $(CFLAGS_COMPILE) $(SRC_DIR)/dao/database.cpp -o $(BUILD_DIR)/dao/database.o

table.o:
	@mkdir -p $(BUILD_DIR)/dao/
	$(CC) $(CFLAGS_COMPILE) $(SRC_DIR)/dao/table.cpp -o $(BUILD_DIR)/dao/table.o

clean:
	$(RM) -r $(BUILD_DIR)/* $(TARGET)