CFLAGS= -Wall -g

all: mains maindloop maindrec loops recursives

.PHONY: clean all loops loopd recursives recursived

mains: main.o libclassrec.a
	gcc ${CFLAGS} -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	gcc ${CFLAGS} -o maindloop main.o ./libclassloops.so

maindrec: main.o libclassrec.so
	gcc ${CFLAGS} -o maindrec main.o ./libclassrec.so

loops: libclassloops.a

recursives: libclassrec.a

loopd: libclassloops.so

recursived: libclassrec.so

libclassloops.a: main.o basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a main.o basicClassification.o advancedClassificationLoop.o

libclassrec.a: main.o basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a main.o basicClassification.o advancedClassificationRecursion.o

libclassloops.so: main.o basicClassification.o advancedClassificationLoop.o
	gcc ${CFLAGS} -fPIC -shared -o libclassloops.so main.o basicClassification.o advancedClassificationLoop.o -lm

libclassrec.so: main.o basicClassification.o advancedClassificationRecursion.o
	gcc ${CFLAGS} -fPIC -shared -o libclassrec.so main.o basicClassification.o advancedClassificationRecursion.o -lm

main.o: main.c NumClass.h
	gcc ${CFLAGS} -c main.c -o $@

basicClassification.o: basicClassification.c NumClass.h
	gcc ${CFLAGS} -c basicClassification.c -o $@

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc ${CFLAGS} -c advancedClassificationLoop.c -o $@

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc ${CFLAGS} -c advancedClassificationRecursion.c -o $@

clean: 
	rm -f *.o *.a *.so mains maindloop maindrec
