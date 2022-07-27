CC = g++
CXXFLAGS = -Wall -I./include -o3 `pkg-config gtkmm-3.0 --cflags --libs` `pkg-config webkit2gtk-4.1 --cflags --libs`
LDFLAFS =

INSTALLDIR = /usr/local/bin
APPNAME = web_surfer

BIN = ../$(APPNAME)

OBJDIR = ../obj
SRCDIR = src

SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
DEP = $(OBJ:$(OBJDIR)/%.o=%.d)

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.d: $(SRCDIR)/%.cpp
	@$(CPP) $(CFLAGS) $< -MM -MT $(@:%.d=$(OBJDIR)/%.o) >$@

-include $(DEP)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CXXFLAGS) -o $@ -c $<

uninstall: 
	rm -f $(INSTALLDIR)/$(APPNAME)

install: all
	cp -f $(BIN) $(INSTALLDIR)/$(APPNAME)
	chmod 755 $(INSTALLDIR)/$(APPNAME)
	

clean:
	rm -f $(OBJ) $(DEP) $(BIN)
cleand:
	rm -f $(DEP)
