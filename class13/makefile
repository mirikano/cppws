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

TARGET	=	dump_mdict3 gen_sentence3 gen_sentence noai

WEXECS	=	dump_mdict3.exe gen_sentence3.exe gen_sentence.exe noai.exe

OBJS	=	utf8.o \
		utf8string.o \
		mdict2.o \
		dump_mdict2.o  \
		gen_sentence2.o  \
		mdict3.o \
		dump_mdict3.o  \
		gen_sentence3.o \
		gen_sentence.o \
		noai.o

WORKDIR =	class13

ARCHIVE =	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/*.cc $(WORKDIR)/*.h $(WORKDIR)/makefile $(WORKDIR)/*.txt)

clean:	
	-$(RM) $(TARGET) $(WEXECS) $(OBJS) $(ARCHIVE)
	-$(RM) -r $(addsuffix .dSYM,$(TARGET))

dump_mdict2:		dump_mdict2.o mdict2.o utf8string.o utf8.o
gen_sentence2:		gen_sentence2.o mdict2.o utf8string.o utf8.o
dump_mdict3:		dump_mdict3.o mdict3.o utf8string.o utf8.o
gen_sentence3:		gen_sentence3.o mdict3.o utf8string.o utf8.o
gen_sentence:		gen_sentence.o mdict3.o utf8string.o utf8.o
noai:			noai.o mdict3.o utf8string.o utf8.o

utf8.o:			utf8.cc utf8.h
utf8string.o:		utf8string.cc utf8string.h utf8.h
mdict2.o:		mdict2.cc mdict2.h utf8string.h utf8.h
dump_mdict2.o:		dump_mdict2.cc mdict2.h utf8string.h utf8.h
gen_sentence2.o:	gen_sentence2.cc mdict2.h utf8string.h utf8.h
mdict3.o:		mdict3.cc mdict3.h utf8string.h utf8.h
dump_mdict3.o:		dump_mdict3.cc mdict3.h utf8string.h utf8.h
gen_sentence3.o:	gen_sentence3.cc mdict3.h utf8string.h utf8.h
gen_sentence.o:		gen_sentence.cc mdict3.h utf8string.h utf8.h
noai.o:			noai.cc mdict3.h utf8string.h utf8.h

##
##      extra rules for cygwin
##
.SUFFIXES:      .cc .exe

.cc.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
