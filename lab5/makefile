radii: lab5.o find_two_radii.o
		gcc -o radii lab5.c find_two_radii.o -lm 
lab5.o: lab5.c lab5.h 
		gcc -c lab5.h
find_two_radii.o: find_two_radii.c lab5.h
		gcc -c find_two_radii.c 
