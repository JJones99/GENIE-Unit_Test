CXX = g++
CXXFLAGS = -g -Wall -fPIC
# LDLIBS += -L./lib -lDBWorker
ROOTFLAGS = `root-config --cflags --glibs`
ROOTINC = `root-config --cflags`
ROOTLIB = `root-config --glibs`

LDLIBS += -lboost_unit_test_framework
LDLIBS += -L$(LOG4CPP_LIB) -llog4cpp
LDLIBS += -L/usr/lib64 -lxml2
LDLIBS += -L$(PYTHIA6) -lPythia6
# ROOT Flags are incomplete.
LDLIBS += -L$(ROOTSYS)/lib -lGeom -lEGPythia6

INCLUDE = -I/genie/app/jjones/tests/boost_1_61_0/boost/test
INCLUDE += -I$(GENIE)/src -I$(LOG4CPP_INC)
#include $(GENIE)/src/make/Make.include

GENIE_LIBS  = $(shell $(GENIE)/src/scripts/setup/genie-config --libs)
LDLIBS += $(GENIE_LIBS)

#BINARIES = test
#TARGETS = test.o

all: proc_info

%.o: %.cpp
	$(CXX) $(INCLUDE) $(ROOTINC) $(CXXFLAGS) $(LDLIBS) -c $< -o $@ #compile

proc_info: proc_info.o
	$(CXX) $(CXXFLAGS) $(INCLUDE) $(LDLIBS) $(ROOTFLAGS) $^ -o $@    #link
