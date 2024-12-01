# /
 # @file Makefile
 # @author Seth Rivers
 # @date 2024-10-21
 # @brief Description: The Makefile for the Linked List Phonebook assignment. Compiles the main and
 # phonebook files together so that they can be used.
 #
 #
 #
 #
 # /

#Defines the compiler
CC = g++

#Compile with all errors and warnings
CFLAGS = -g -Wall -Wextra -c

#Links the .o files together and creates an executable
TARGET = start

#Readies $(TARGET) for use in the following code
all: $(TARGET)

#Marks all the files that will be compiled
$(TARGET):	main.o montyhall.o
		$(CC) main.o montyhall.o -o $(TARGET)

#Compiles the main.cpp file with the .h file
main.o: 	main.cpp montyhall.h
		$(CC) $(CFLAGS) main.cpp

#Compiles the Steganography.cpp/.h files
montyhall.o: 	phonebook.h montyhall.cpp
		$(CC) $(CFLAGS) montyhall.cpp

#Cleans out any unnecaary items post compiling.
clean:
		$(RM) *.o *~ start
