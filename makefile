# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h huey17.h huey17.o
	$(CC) -o robots.out main.c robot.o huey17.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

huey17.o:	huey17.c huey17.h
	$(CC) -c huey17.c
