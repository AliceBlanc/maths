# Makefile

CPP=g++
CPPARGS=-g -Wall
LDFLAGS=-g
LDLIBS=

SRCDIR=src
LIBDIR=.lib

$(LIBDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(LIBDIR)
	$(CPP) $(CPPARGS) -c -o $@ $^

test: $(LIBDIR)/test.o
	$(CPP) $(LDFLAGS) $(LDLIBS)  -o test $^
