SHELL := /bin/bash

.PHONY: all
all:
	@echo -e "\\x1b[00;36mgcc -I. caesar.c main.c && ./a.out\\x1b[00m"
	@gcc -I. caesar.c main.c && ./a.out

.PHONY: cov
cov:
	@echo -e "\\x1b[00;36mgcc -I. -fprofile-arcs -ftest-coverage caesar.c main.c && ./a.out\\x1b[00m"
	@gcc -I. -fprofile-arcs -ftest-coverage caesar.c main.c && ./a.out
	@echo ""
	@echo -e "\\x1b[00;36mgcov caesar.c\\x1b[00m"
	@gcov caesar.c

.PHONY: tis
tis:
	@echo -e "\\x1b[00;36mtis-analyzer-gui -64 -cpp-extra-args=\"-I.\" -val -slevel 100 -val-malloc-returns-null caesar.c main.c\\x1b[00m"
	@tis-analyzer -gui -64 -cpp-extra-args="-I." -val -slevel 100 -val-malloc-returns-null caesar.c main.c

.PHONY: clean
clean:
	rm -rf a.out a.out.dSYM *.gcov *.gcda *.gcno
