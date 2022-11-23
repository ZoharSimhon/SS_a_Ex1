#dictionery
CC = gcc -c
FLAGS = -Wall -g
AR = ar -rcs


all: mains maindloop maindrec libclassloops.a libclassrec.a libclassrec.so libclassloops.so
	  
.PHONY: clean
clean:
	rm -rf *.o *.a *.so mains maindloop maindrec 

loops: libclassloops.a

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	$(AR) libclassloops.a basicClassification.o advancedClassificationLoop.o

recursives: libclassrec.a

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	$(AR) libclassrec.a basicClassification.o advancedClassificationRecursion.o

recursived: libclassrec.so

libclassrec.so : basicClassification.o advancedClassificationRecursion.o
	gcc -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

loopd: libclassloops.so

libclassloops.so : basicClassification.o advancedClassificationLoop.o
	gcc -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o


mains: main.o libclassrec.a
	gcc -Wall main.o ./libclassrec.a -o mains -lm

maindloop: main.o libclassloops.so
	gcc -Wall main.o ./libclassloops.so -o maindloop -lm

maindrec: main.o libclassrec.so
	gcc -Wall main.o ./libclassrec.so -o maindrec -lm



basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -fPIC basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -fPIC advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -fPIC advancedClassificationRecursion.c

main.o: main.c  NumClass.h
	$(CC) $(FLAGS) main.c