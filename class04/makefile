#
#	makefile
#

CXX		=	g++
CXXFLAGS	=	$(CXXINCLUDE) $(DEBUG)
CXXINCLUDE	=
LINK.o		=	$(LINK.cc)
LDLIBS		=
LDLIBS		=
LOADLIBS	=
DEBUG		=
DEBUG		=	-g
ZIPCMD		=	zip


TARGET	=	gen1gram gen2gram gen3gram

WEXECS	=	gen1gram.exe gen2gram.exe gen3gram.exe

OBJS	=	utf8.o gen1gram.o gen2gram.o gen3gram.o

WORKDIR =	class04

ARCHIVE =	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/*.cc $(WORKDIR)/*.h $(WORKDIR)/makefile)

clean:
	-$(RM) $(TARGET) $(WEXECS) $(OBJS) $(ARCHIVE)
	-$(RM) -r $(addsuffix .dSYM,$(TARGET))


gen1gram:	gen1gram.o utf8.o
gen2gram:	gen2gram.o utf8.o
gen3gram:	gen3gram.o utf8.o
gen1gram.o:	gen1gram.cc utf8.h
gen2gram.o:	gen2gram.cc utf8.h
gen3gram.o:	gen3gram.cc utf8.h
utf8.o:		utf8.cc utf8.h

##
##      extra rules for cygwin
##
.SUFFIXES:      .cc .exe

.cc.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

