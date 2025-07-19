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


TARGET	=	genngram0 genngram genngram2

WEXECS	=	genngram0.exe genngram.exe genngram2.exe

OBJS	=	utf8.o genngram0.o genngram.o genngram2.o

WORKDIR =	class05

ARCHIVE =	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/*.cc $(WORKDIR)/*.h $(WORKDIR)/makefile)

clean:
	-$(RM) $(TARGET) $(WEXECS) $(OBJS) $(ARCHIVE)
	-$(RM) -r $(addsuffix .dSYM,$(TARGET))


genngram0:	genngram0.o utf8.o
genngram:	genngram.o utf8.o
genngram2:	genngram2.o utf8.o
genngram0.o:	genngram0.cc utf8.h
genngram.o:	genngram.cc utf8.h
genngram2.o:	genngram2.cc utf8.h
utf8.o:		utf8.cc utf8.h

##
##      extra rules for cygwin
##
.SUFFIXES:      .cc .exe

.cc.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

