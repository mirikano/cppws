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


TARGET	=	countchar2 utf8_test utf8_test2

WEXECS	=	countchar2.exe utf8_test.exe utf8_test2.exe 

OBJS	=	utf8.o countchar2.o utf8_test.o utf8_test2.o

WORKDIR =	class03

ARCHIVE =	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/*.cc $(WORKDIR)/*.h $(WORKDIR)/makefile)

clean:
	-$(RM) $(TARGET) $(WEXECS) $(OBJS) $(ARCHIVE)
	-$(RM) -r $(addsuffix .dSYM,$(TARGET))

countchar2.o:	countchar2.cc
utf8_test:	utf8_test.o utf8.o
utf8_test2:	utf8_test2.o utf8.o
utf8.o:		utf8.cc utf8.h

##
##      extra rules for cygwin
##
.SUFFIXES:      .cc .exe

.cc.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
