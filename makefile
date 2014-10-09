# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h hollowed17.h hollowed17.o
	$(CC) -o robots.out main.c robot.o hollowed17.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

hollowed17.o:	hollowed17.c hollowed17.h
	$(CC) -c hollowed17.c
