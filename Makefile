PROJECTS := Application

.PHONY: all clean $(PROJECTS) uninstall install cleand

all: $(PROJECTS)

Application: 
	@$(MAKE) --no-print-directory -C $@ -f Makefile

uninstall:
	@$(MAKE) --no-print-directory -C Application -f Makefile uninstall

install:
	@$(MAKE) --no-print-directory -C Application -f Makefile install

clean:
	@$(MAKE) --no-print-directory -C Application -f Makefile clean
cleand:
	@$(MAKE) --no-print-directory -C Application -f Makefile cleand
