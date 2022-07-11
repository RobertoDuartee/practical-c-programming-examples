#------------------------
#	Makefile
#-----------------------

CC=gcc
CFLAGS =-g -D__USE_FIXED_PROTOTYPES__ -ansi


#
#Compiler flags
#	-g: enable debugging
#	-Wall: Turn on all warnings
#	-D__USE_FIXED_PROTOTYPES__: force the  compiler to use the correct 
#headers
#	-ansi: Dont use GNU extensions. Stick to ANSI C

calc2: calc2.c
	$(CC) $(CFLAGS) -o calc2 calc2.c

clean:
	rm -f calc2
