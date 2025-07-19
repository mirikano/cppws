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
DEBUG		=	-g -Wall
ZIPCMD		=	zip


TARGET	=	ex01 ex02 ai01 countchar

WEXECS	=	ex01.exe ex02.exe ai01.exe countchar.exe

OBJS	=	ex01.o ex02.o ai01.o countchar.o

WORKDIR =	class02

ARCHIVE =	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/*.cc $(WORKDIR)/makefile)

clean:
	-$(RM) $(TARGET) $(WEXECS) $(OBJS) $(ARCHIVE)
	-$(RM) -r $(addsuffix .dSYM,$(TARGET))

##
##      extra rules for cygwin
##
.SUFFIXES:      .cc .exe

.cc.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

