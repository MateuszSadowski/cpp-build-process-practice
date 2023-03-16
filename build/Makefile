CC=g++
CFLAGS=-g -O0
SRC=../src/main.cpp
LIB_SRC=../src/my-lib/lib.cpp
TARGET=my_program
LIB_TARGET=libmy_lib.so
EXTERNAL_LIB_PATH=../vendor/external-lib/bin

all: $(TARGET) $(LIB_TARGET)

$(TARGET): $(SRC) $(LIB_TARGET)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) -Llib -lmy_lib

$(LIB_TARGET): $(LIB_SRC)
	$(CC) $(CFLAGS) -c $(LIB_SRC) -o obj/my_lib.o
	$(CC) $(CFLAGS) -o lib/$(LIB_TARGET) -shared obj/my_lib.o -L$(EXTERNAL_LIB_PATH) -lexternal_lib

clean:
	rm -rf $(TARGET) *.dSYM/ lib/$(LIB_TARGET) obj/*.o
