GCC=gcc
LD=ld
CXXFILES= TatrisManager.cpp \
          TatrisSquare.cpp \
          TatrisStick.cpp \
          TatrisStair.cpp \
          TatrisChair.cpp \
          TatrisEvent.cpp \
          TatrisDraw.cpp \
          TatrisMap.cpp \
          tetris.cpp

OBJECTS=${patsubst %.cpp, %.o, ${CXXFILES}}

Headfiles= TatrisManager.h\
           TatrisSquare.h \
           TatrisStick.h \
           TatrisStair.h \
           TatrisChair.h \
           TatrisEvent.h \
           TatrisDraw.h \
           TatrisMap.h \
           common.h

CXXFLAGS = -O2 -fPIC -Werror -I./ -o 
LDFLAGS  = -fPIC -o
TARGET = tatris
all: $(OBJECTS)
	$(GCC) $^  $(LDFLAGS) $(TARGET)

$(OBJECTS):%.o:%.cpp
	$(GCC) -c $< $(CXXFLAGS) $@

clean:
	$(RM) $(OBJECTS)
	$(RM) $(TARGET) 
