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

TARGET	=	dump_sdict1 gen_sentence1 \
		dump_sdict2 gen_sentence2 \
		dump_sdict3 gen_sentence3 \
		dump_sdict gen_sentence

WEXECS	=	dump_sdict1.exe gen_sentence1.exe \
		dump_sdict2.exe gen_sentence2.exe \
		dump_sdict3.exe gen_sentence3.exe \
		dump_sdict.exe gen_sentence.exe

OBJS	=	utf8.o \
		sdict1.o sdict2.o sdict3.o sdict.o \
		dump_sdict1.o gen_sentence1.o \
		dump_sdict2.o gen_sentence2.o \
		dump_sdict3.o gen_sentence3.o \
		dump_sdict.o gen_sentence.o

WORKDIR =	class11

ARCHIVE =	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/*.cc $(WORKDIR)/*.h $(WORKDIR)/makefile $(WORKDIR)/*.txt)

clean:	
	-$(RM) $(TARGET) $(WEXECS) $(OBJS) $(ARCHIVE)
	-$(RM) -r $(addsuffix .dSYM,$(TARGET))

dump_sdict1:		dump_sdict1.o sdict1.o utf8.o
dump_sdict2:		dump_sdict2.o sdict2.o utf8.o
dump_sdict3:		dump_sdict3.o sdict3.o utf8.o
dump_sdict:		dump_sdict.o sdict.o utf8.o
gen_sentence1:		gen_sentence1.o sdict1.o utf8.o
gen_sentence2:		gen_sentence2.o sdict2.o utf8.o
gen_sentence3:		gen_sentence3.o sdict3.o utf8.o
gen_sentence:		gen_sentence.o sdict.o utf8.o

utf8.o:			utf8.cc utf8.h
utf8string.o:		utf8string.cc utf8string.h utf8.h
sdict1.o:		sdict1.cc sdict1.h utf8.h
sdict2.o:		sdict2.cc sdict2.h utf8.h
sdict3.o:		sdict3.cc sdict3.h utf8.h
sdict.o:		sdict.cc sdict.h utf8.h
dump_sdict1.o:		dump_sdict1.cc sdict1.h utf8.h
dump_sdict2.o:		dump_sdict2.cc sdict2.h utf8.h
dump_sdict3.o:		dump_sdict3.cc sdict3.h utf8.h
gen_sentence1.o:	gen_sentence1.cc sdict1.h utf8.h
gen_sentence2.o:	gen_sentence2.cc sdict2.h utf8.h
gen_sentence3.o:	gen_sentence3.cc sdict3.h utf8.h

##
##      extra rules for cygwin
##
.SUFFIXES:      .cc .exe

.cc.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
