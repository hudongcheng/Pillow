
srcs = Except.c File.c Storage.c Copy.c Palette.c Geometry.c test_size.c
objects = Except.o File.o Storage.o Copy.o Palette.o Geometry.o test_size.o
	

resize: $(objects)
	gcc -o resize $(objects)
	
$(objects) : $(srcs) Imaging.h ImPlatform2.h
	cc -c $(srcs)
	
clean:
	-rm -f *.o
	-rm resize