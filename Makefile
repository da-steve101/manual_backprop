CC=g++
FLAGS="-std=c++17 -Wall -g"
SRC_DIR=src/
BUILD_DIR=build/
TEST_DIR=test/

$(BUILD_DIR)%.o : $(SRC_DIR)%.cc
	$(CC) -c $(CFLAGS) $< -o $@

$(BUILD_DIR)test_dense: $(TEST_DIR)test_dense.cc $(BUILD_DIR)layer.o
	$(CC) $(CFLAGS) -o $(BUILD_DIR)test_dense -I $(SRC_DIR) $(TEST_DIR)test_dense.cc $(BUILD_DIR)*.o

clean:
	rm -rf build/*
