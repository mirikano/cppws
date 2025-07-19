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
## DEBUG		=	-g
ZIPCMD		=	zip


TARGET	=	ex05-1 ex05-2 ex06 ex07 \
		eval_cbytes eval_cbytes2

WEXECS	=	ex05-1.exe ex05-2.exe ex06.exe ex07.exe \
		eval_cbytes.exe eval_cbytes2.exe

OBJS	=	utf8.o \
		ex05-1.o ex05-2.o ex06.o ex07.o \
		eval_cbytes.o eval_cbytes2.o

WORKDIR =	class07

ARCHIVE =	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/*.cc $(WORKDIR)/*.h $(WORKDIR)/makefile)

clean:	
	-$(RM) $(TARGET) $(WEXECS) $(OBJS) $(ARCHIVE)
	-$(RM) -r $(addsuffix .dSYM,$(TARGET))

ex05-1:		ex05-1.o
ex05-2:		ex05-2.o
ex06:		ex06.o
ex07:		ex07.o

eval_cbytes:	eval_cbytes.o utf8.o
eval_cbytes2:	eval_cbytes2.o utf8.o

utf8.o:		utf8.cc utf8.h

##
##      extra rules for cygwin
##
.SUFFIXES:      .cc .exe

.cc.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
