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

TARGET	=	count_2gram dump_dict0 gen_sentence0

WEXECS	=	count_2gram.exe dump_dict0.exe gen_sentence0.exe

OBJS	=	utf8.o \
		dict0.o \
		count_2gram.o dump_dict0.o gen_sentence0.o

WORKDIR =	class10

ARCHIVE =	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/*.cc $(WORKDIR)/*.h $(WORKDIR)/makefile $(WORKDIR)/*.txt)

clean:	
	-$(RM) $(TARGET) $(WEXECS) $(OBJS) $(ARCHIVE)
	-$(RM) -r $(addsuffix .dSYM,$(TARGET))

count_2gram:		count_2gram.o utf8.o
dump_dict0:		dump_dict0.o dict0.o utf8.o
gen_sentence0:		gen_sentence0.o dict0.o utf8.o

utf8.o:			utf8.cc utf8.h
dict0.o:		dict0.cc dict0.h utf8.h
count_2gram.o:		count_2gram.cc utf8.h
dump_dict0.o:		dump_dict0.cc dict0.h utf8.h
gen_sentence0.o:	gen_sentence0.cc dict0.h utf8.h

##
##      extra rules for cygwin
##
.SUFFIXES:      .cc .exe

.cc.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
