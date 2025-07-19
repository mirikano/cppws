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


TARGET	=	ex08-1 ex08-2 ex09-1 ex09-2 ex09_3 \
		u8char_count u8str_test u8str_count

WEXECS	=	ex08-1.exe ex08-2.exe ex09-1.exe ex09-2.exe ex09_3.exe \
		u8char_count.exe u8str_test.exe u8str_count.exe

OBJS	=	utf8.o utf8string.o \
		ex08-1.o ex08-2.o ex09-1.o ex09-2.o ex09_3.o \
		u8char_count.o u8str_test.o u8str_count.o

WORKDIR =	class09

ARCHIVE =	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/*.cc $(WORKDIR)/*.h $(WORKDIR)/makefile)

clean:	
	-$(RM) $(TARGET) $(WEXECS) $(OBJS) $(ARCHIVE)
	-$(RM) -r $(addsuffix .dSYM,$(TARGET))

ex08-1:		ex08-1.o
ex08-2:		ex08-2.o
ex09-1:		ex09-1.o
ex09-2:		ex09-2.o
ex09_3:		ex09-3.o

u8char_count:	u8char_count.o utf8.o
u8str_test:	u8str_test.o utf8string.o utf8.o
u8str_count:	u8str_count.o utf8string.o utf8.o

utf8.o:		utf8.cc utf8.h
utf8string.o:	utf8string.cc utf8string.h

u8char_count.o:	u8char_count.cc utf8.h
u8str_test.o:	u8str_test.cc utf8.h utf8string.h

##
##      extra rules for cygwin
##
.SUFFIXES:      .cc .exe

.cc.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
