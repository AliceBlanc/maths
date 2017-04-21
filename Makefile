# Makefile

CPP=g++
CPPFLAGS=-g -Wall
LDFLAGS=-g
LDLIBS=

SRCDIR=src
LIBDIR=.lib
DEPDIR := .d
$(shell mkdir -p $(DEPDIR) >/dev/null)
$(shell mkdir -p $(LIBDIR) >/dev/null)

SRCFILES=$(SRCDIR)/Arbre.cpp $(SRCDIR)/Feuille.cpp $(SRCDIR)/Noeud.cpp $(SRCDIR)/test.cpp
OBJFILES=$(subst $(SRCDIR),$(LIBDIR),$(subst .cpp,.o,$(SRCFILES)))

$(DEPDIR)/%.d : $(SRCDIR)/%.cpp
	@set -e; rm -f $@; \
	$(CPP) -MM $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$


$(LIBDIR)/%.o: $(SRCDIR)/%.cpp $(DEPDIR)/%.d
	$(CPP) $(CPPFLAGS) -c $< -o $@

test: $(OBJFILES)
	$(CPP) $(LDFLAGS) $(LDLIBS)  -o test $^

depend: $(subst $(SRCDIR),$(DEPDIR),$(subst .cpp,.d,$(SRCFILES)))

include $(wildcard $(patsubst %,$(DEPDIR)/%.d,$(basename $(SRCSFILES))))
# include $(subst $(SRCDIR),$(DEPDIR),$(subst .cpp,.d,$(SRCFILES)))
