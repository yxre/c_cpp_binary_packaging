IDIR =../include
CC=clang
CCPP=clang++
CFLAGS=-I$(IDIR) 

ODIR=bin
LDIR =../lib

LIBS=-lm



all: ./lib/main ./lib/basics_c clean

./lib/basics_c: ./src/basics.c
	mkdir -p ./lib
	$(CC) ./src/basics.c -o ./lib/basics_c

./lib/main: clean
	mkdir -p lib
	$(CCPP) ./src/main.cc -o ./lib/main

./lib/main_static:
	# this requires glibc-static and libstdc++-static to be installed
	# remove depdencency on libstdc++ on system.
	mkdir -p ./lib
	$(CCPP) ./src/main.cc -o ./lib/main_static_linked -static

make_static_archive: ./src/example_external.cpp
	# -fPIC means position independent code. Needed for shared libraries
	$(CCPP) -fPIC -c ./src/example_external.cpp -o ./lib/libexample_external.o
	mkdir -p ./lib
	ar -cq ./lib/libexample_external.a ./lib/libexample_external.o
	ar -p ./lib/libexample_external.a
	nm -gC ./lib/libexample_external.a

use_static_archive: ./src/use_example.cc
	# -L gives the path for libraries to be searched
	#  -l gives the name of the library to be linked
	$(CCPP) ./src/use_example.cc -L./lib -lexample_external -o ./src/use_example

make_dynamic_archive: ./src/example_external.cpp
	# -shared tells to create a dynamic shared library
	$(CCPP) -shared -o ./lib/libexample.so ./src/example_external.cpp

use_dynamic_archive: ./src/example_external.cpp
	# -L is the search path
	#  -l tells it to use that library
	#  Can use `export LD_LIBRARY_PATH=~:$LD_LIBRARY_PATH` to set a static export
	$(CCPP) ./src/use_example.cc -L./lib -lexample_external -o ./lib/use_example_dynamic

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
	rm -rf lib



