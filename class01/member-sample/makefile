#
#	makefile
#

CXX		=	g++
CXXFLAGS	=	$(CXXINCLUDE) $(DEBUG)
CXXINCLUDE	=
LINK.o		=	$(LINK.cc)
LDLIBS		=	
LOADLIBS	=	
DEBUG		=	
DEBUG		=	-Wall
#DEBUG		=	-Wall -g
ZIPCMD		=	zip

TARGET		=	VipMember0Test
OBJS		=	VipMember0Test.o VipMember0.o
WEXECS		=	VipMember0Test.exe

WORKDIR		=	member-sample

ARCHIVE		=	$(WORKDIR).zip

ZIP_SRCS	=	$(WORKDIR)/*.cpp
ZIP_HDRS	=	$(WORKDIR)/*.h
ZIP_MISC	=	$(WORKDIR)/makefile

default:
	@echo make XXX となるようにターゲットを指定してください

all:		$(TARGET)

clean:	
		-$(RM) $(WEXECS) $(OBJS) $(TARGET) *.exe.stackdump

zip:
	-(cd ..; $(ZIPCMD) $(ARCHIVE) $(ZIP_SRCS) $(ZIP_HDRS) $(ZIP_MISC) )

VipMember0Test:		VipMember0Test.o VipMember0.o
		$(LINK.o) $^ -o $@

VipMember0Test.o:	VipMember0Test.cpp VipMember0.h
VipMember0.o:		VipMember0.cpp VipMember0.h

##
##	extra rules for cygwin
##
.SUFFIXES:	.cpp .exe

.cpp.exe:
		$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@
