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

TARGET	=	dump_morpheme0 count_morpheme0 dump_mdict1-0 \
		dump_morpheme count_morpheme dump_mdict1 \
		gen_sentence1

WEXECS	=	dump_morpheme0.exe count_morpheme0.exe dump_mdict1-0.exe \
		dump_morpheme.exe count_morpheme.exe dump_mdict1.exe  \
		gen_sentence1.exe

OBJS	=	utf8.o \
		utf8string.o \
		dump_morpheme0.o count_morpheme0.o dump_mdict1-0.o \
		dump_morpheme.o count_morpheme.o dump_mdict1.o \
		gen_sentence1.o 

WORKDIR =	class12

ARCHIVE =	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/*.cc $(WORKDIR)/*.h $(WORKDIR)/makefile $(WORKDIR)/*.txt)

clean:	
	-$(RM) $(TARGET) $(WEXECS) $(OBJS) $(ARCHIVE)
	-$(RM) -r $(addsuffix .dSYM,$(TARGET))

dump_morpheme0:		dump_morpheme0.o utf8string.o utf8.o
count_morpheme0:	count_morpheme0.o utf8string.o utf8.o
dump_mdict1-0:		dump_mdict1-0.o mdict1.o utf8string.o utf8.o
dump_morpheme:		dump_morpheme.o utf8string.o utf8.o
count_morpheme:		count_morpheme.o utf8string.o utf8.o
dump_mdict1:		dump_mdict1.o mdict1.o utf8string.o utf8.o
gen_sentence1:		gen_sentence1.o mdict1.o utf8string.o utf8.o

utf8.o:			utf8.cc utf8.h
utf8string.o:		utf8string.cc utf8string.h utf8.h
mdict1.o:		mdict1.cc mdict1.h utf8string.h utf8.h
dump_morpheme0.o:	dump_morpheme0.cc utf8string.h utf8.h
count_morpheme0.o:	count_morpheme0.cc utf8string.h utf8.h
dump_mdict1-0.o:	dump_mdict1-0.cc mdict1.h utf8string.h utf8.h
dump_morpheme.o:	dump_morpheme.cc utf8string.h utf8.h
count_morpheme.o:	count_morpheme.cc utf8string.h utf8.h
dump_mdict1.o:		dump_mdict1.cc mdict1.h utf8string.h utf8.h
gen_sentence1.o:	gen_sentence1.cc mdict1.h utf8string.h utf8.h

##
##      extra rules for cygwin
##
.SUFFIXES:      .cc .exe

.cc.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
