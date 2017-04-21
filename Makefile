# Makefile

CPP=g++
CPPARGS=-g -Wall
LDFLAGS=-g
LDLIBS=

SRCDIR=src
LIBDIR=.lib

SRCFILES=$(SRCDIR)/Arbre.cpp $(SRCDIR)/Feuille.cpp $(SRCDIR)/Noeud.cpp $(SRCDIR)/test.cpp
OBJFILES=$(subst $(SRCDIR),$(LIBDIR),$(subst .cpp,.o,$(SRCFILES)))

$(SRCDIR)/%.cpp: $(SRCDIR)/%.hpp

$(LIBDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(LIBDIR)
	$(CPP) $(CPPARGS) -c -o $@ $^

test: $(OBJFILES)
	$(CPP) $(LDFLAGS) $(LDLIBS)  -o test $^
