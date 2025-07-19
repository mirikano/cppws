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


TARGET		=	eval1-1 eval1-2 eval1-3

WEXECS		=	eval1-1.exe eval1-2.exe eval1-3.exe

OBJS		=	eval1-1.o eval1-2.o eval1-3.o

WORKDIR		=	report1

ARCHIVE		=	$(WORKDIR).zip

default:
	@echo make XXX となるようにターゲットを指定してください

all:	$(TARGET)

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(WORKDIR)/*.cc $(WORKDIR)/*.h $(WORKDIR)/makefile $(WORKDIR)/*.csv)

info:
	@ -(g++ --version)

clean:	
	-$(RM) $(TARGET) $(WEXECS) $(OBJS) $(ARCHIVE)
	-$(RM) -r $(addsuffix .dSYM,$(TARGET))

eval1-1:	eval1-1.o
eval1-2:	eval1-2.o
eval1-3:	eval1-3.o

##
##      extra rules for cygwin
##
.SUFFIXES:      .cc .exe

.cc.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
